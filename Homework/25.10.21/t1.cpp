#include <iostream>
using namespace std;
int main() {
	int day;
	int month;
	int year;
	do {
		cout << "Enter day: " << endl;
		cin >> day;
	} while (day < 1 || day>31);
	do {
		cout << "Enter month: " << endl;
		cin >> month;
	} while (month < 1 || month>12);
	do {
		cout << "Enter year: " << endl;
		cin >> year;
	} while (year < 1);
	int a = (14 - month) / 12;
	int m = month + 12 * a - 2;
	int d = 0;
	while (d != 4) {
		int y = year - a;
		d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
		year++;
	}
	cout << "Next year: " << year;
}
Corrected
