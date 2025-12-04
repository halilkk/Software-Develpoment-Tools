#include <iostream>
#include <cstdlib> // rand, srand icin
#include <ctime>   // time icin

int main() {
    // 5 elemanli basit bir C dizisi
    int numbers[5];
    int n = 5;

    std::srand(std::time(0));

    std::cout << "Original Array Elements:" << std::endl;

    // g) Diziyi rastgele degerlerle baslat
    for (int i = 0; i < n; ++i) {
        numbers[i] = std::rand() % 100;
        std::cout << "Index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}