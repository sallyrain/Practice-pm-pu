#include <iostream>
void snail(int n, int m) {
    int** A= new int* [n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }
    int N = 1;
    int k = 0;
    int len = n * m;
    while (N <= len) {

        for (int i = k; i < m - k && N <= len; ++i)
            A[k][i] = N++;

        for (int i = k + 1; i < n - k && N <= len; ++i)
            A[i][m - k - 1] = N++;
        for (int i = m - k - 2; i >= k && N <= len; --i)
            A[n - k - 1][i] = N++;
        for (int i = n - k - 2; i >= k + 1 && N <= len; --i)
            A[i][k] = N++;
        ++k;
    }
    std::cout << std::endl;
    for (int k = 0; k < n; ++k) {
        for (int j = 0; j < m; ++j)
            std::cout << A[k][j] << " ";
        std::cout << std::endl;
    }
}
int main(int argc, const char* argv[]) {
    int n, m;
    n = 0;
    m = 0;
    std::cout << "Enter size array: ";
    std::cin >> n >> m;
    snail(n, m);
    return 0;
}