#include <iostream>
int main(){
	int n;
	int s=0; //step
	int m = 0; //max
	std::cout << "Enter n: " << std::endl;
	std::cin >> n;
	while ((n != 1) && (n!=0)){
		s++;
		if (n > m) {
			m = n;
		}
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n * 3+1;
		}
	}
	std::cout << "Step: " << s << std::endl;
	std::cout << "Max: " << m << std::endl;

}