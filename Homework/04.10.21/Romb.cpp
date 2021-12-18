

#include <iostream>
#include <cmath>                                                            
using namespace std;
int main() {

    int n = 0;
    int m = 0;
    cout << "Enter n - the height of the rhombus: ";
    cin >> n;
    cout << endl << "Enter the number of rhombuses: ";
    cin >> m;
    cout << endl;

    for (int k = 1; k <= (2 * n - 1); k++) {
        for (int j = 1; j <= m; j++) {
            for (int s = 0; s < abs((n - k) % n); s++)
                cout << ' ';
            for (int d = 0; d < ((n - 1) - abs((n - k) % n)); d++)
                cout << '*';
            cout << '*';
            for (int d = 0; d < ((n - 1) - abs((n - k) % n)); d++)
                cout << '*';
            for (int s = 0; s < abs((n - k) % n); s++)
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}