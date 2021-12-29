#include <iostream>
#include <fstream>

std::string to_hex(int a) {
	std::string result;
	int b = a % 16;
	a /= 16;
	if (a <= 9) {
		result += a + '0';
	}
	else {
		result += a + 'F' - 15;
	}
	if (b <= 9) {
		result += b + '0';
	}
	else {
		result += b + 'F' - 15;
	}
	return result;
}
std::string numerows(int k) {
	std::string result = "0";
	for (int i = 0; i < 4; ++i) {
		result = to_hex(k % 256) + result;
		k /= 256;
	}
	return ("0" + result);
}

int main() {
	const char* ifname = "input.txt";
	const char* ofname = "output.txt";
	int num = 0;
	int str[16];
	int dime = 0;
	std::ifstream inFile(ifname, std::ios_base::binary);
	if (!inFile){
		std::cout << "Cant open file" << ifname << std::endl;
		return 1;
	}
	std::ofstream outFile(ofname);
	if (!outFile){
		std::cout << "Cant open file" << ofname << std::endl;
		inFile.close();
		return 2;
	}
	while (inFile.peek() != EOF) {
		outFile << numerows(num);
		outFile << ": ";
		num++;
		for (int j = 0; j < 16; ++j) {
			if (inFile.peek() != EOF) {
				str[j] = inFile.get();
				dime = 16;
			}
			else {
				dime = j + 1;
				break;
			}
		}
		for (int j = 0; j < dime; ++j) {
			if (j == 8) {
				outFile << "| ";
			}
			outFile << to_hex(str[j]);
			outFile << " ";
		}
		if (dime != 16) { 
			for (int j = 0; j < 16 - dime; ++j) {
				if (j + dime == 8) {
					outFile << "| ";
				}
				outFile << "  ";
				outFile << " ";
			}
		}
		if (dime == 16) {
			for (int j = 0; j < 16; ++j) {
				if (str[j] >= 32) {
					outFile.put(char(str[j]));
				}else {
					outFile.put('.');
				}
			}

		}else {
			for (int j = 0; j < dime - 1; ++j) {
				if (str[j] >= 32) {
					outFile.put(char(str[j]));
				}else {
					outFile.put('.');
				}
			}
		}
		outFile << std::endl;
	}
	std::cout << "Done!";
	inFile.close();
	outFile.close();
	return 0;
}

