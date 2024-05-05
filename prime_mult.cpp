#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long productOfPrimesBetween1AndN(int n) {
    unsigned long long product = 1;
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            product *= i;
        }
    }
    return product;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Product of prime numbers between 1 and " << n << " is: " << productOfPrimesBetween1AndN(n) << std::endl;
    return 0;
}
