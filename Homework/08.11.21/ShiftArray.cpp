#include <iostream>
void shiftArray(int A[], int len, int k) {
    int r;
    std::cout << std::endl;
    if (k > 0) {
        while (k > 0) {
            r = A[0];
            for (int i = 0; i < len - 1; ++i) {
                A[i] = A[i + 1];
            }
            A[len - 1] = r;
            --k;
        }
        for (int i = 0; i < len; ++i) {
            std::cout << A[i] << " ";
        }
    }
    else {
        k = -k;
        int c;
        int t;
        for (int i = 0; i < len / 2; ++i) {
            c = A[i];
            A[i] = A[len - 1 - i];
            A[len - 1 - i] = c;
        }
        while (k > 0) {
            r = A[0];
            for (int i = 0; i < len - 1; ++i) {
                A[i] = A[i + 1];
            }
            A[len - 1] = r;
            --k;
        }
        for (int i = 0; i < len / 2; ++i) {
            t = A[i];
            A[i] = A[len - 1 - i];
            A[len - 1 - i] = t;
        }
        for (int i = 0; i < len; ++i) {
            std::cout << A[i] << " ";
        }
    }
}


int main() {
    int len, k;
    std::cout << "Input lenght:";
    std::cin >> len;
    std::cout << "Input k:";
    std::cin >> k;
    int* A = new int[len];
    for (int i = 0; i < len; ++i) {
        A[i] = i + 1;
        std::cout << A[i] << " ";
    }

    shiftArray(A, len, k);
    return 0;
}