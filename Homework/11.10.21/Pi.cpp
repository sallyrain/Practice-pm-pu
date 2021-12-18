#include <iostream>

double get_nth_term(unsigned long long n) {
    double nth_term = 1 / (double)(2 * n - 1);
    if (n % 2 == 0) {
        return -nth_term;
    }
    else {
        return nth_term;
    }
}

int main() {
    double precision;
    do {
        std::cout << "Enter precision : " << std::endl;
        std::cin >> precision;
    } while (precision <= 0);
    unsigned long long n = 0;
    double sum = 0, prev_sum;
    do {
        prev_sum = sum;
        sum += get_nth_term(++n);
    } while (std::abs(4 * (sum - prev_sum)) > precision);
    std::cout << "Pi=" << 4 * sum << std::endl;
}