#include <iostream>

void PrintEvenNumbers(bool isEven, const size_t number);

int main() {
    const size_t N = 13;

    for (size_t i = 0; i <= N; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    PrintEvenNumbers(false, N);

    return 0;
}

void PrintEvenNumbers(bool isEven, const size_t number) {
    for (size_t i = !isEven; i <= number; i += 2) {
        std::cout << i << " ";
    }
}