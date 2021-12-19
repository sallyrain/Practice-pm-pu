#include <iostream>
int main() {
    const int N = 40;
    int Arr[N], sum = 0, hole;
    std::cout << "enter number: " << std::endl;
    std::cin >> hole; 
    for (int i = 0; i < N; ++i) {
        Arr[i] = i < hole ? i : i + 1;
        std::cout << Arr[i] << ' ' << std::endl;
    }
    for (int i = 0; i < N; ++i) {
        sum += Arr[i];
    }
    std::cout << '\n' << N + N * (N - 1) / 2 - sum << std::endl;
}