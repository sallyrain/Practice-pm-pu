#include <iostream>
using namespace std;
int main(){
    int x;
    do {
        cout << "Input natural number: " << endl;
        cin >> x;
    } while (x < 0);
    int N;
    do {
        cout << "Input number system: " << endl;
        cin >> N;
    } while (N < 2 or N > 16);

    int tmp = x, m = 1;

    while (tmp) {
        m *= N;
        tmp /= N;
    }
    tmp = x;
    while (m) {
        int i = tmp / m;
        if (i < 10) {
            cout << i << endl;
        }
        else {
            cout << char('A' + i - 10) << endl;
        }
        tmp %= m;
        m /= N;
    }
    
    return 0;
}
