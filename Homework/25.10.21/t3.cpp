#include <iostream>
using namespace std;
int main() {
    int N, rooms = 1, temp = 0, Floor = 1;
    cout << "Enter the room number: " << endl;
    cin >> N;
    while (N > 0) {
        if (temp == rooms) {
            temp = 0;
            rooms++;
        }
        else if (N > rooms) {
            temp++;
            Floor++;
            N -= rooms;
        }
        else {
            break;
        }
    }
    cout << Floor << " " << N << endl;
    return 0;
}