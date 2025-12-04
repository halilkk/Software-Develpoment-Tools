#include <iostream>
#include <cstdlib>
#include <ctime>

// Diziyi yazdiran basit bir fonksiyon
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// i) Manuel Bubble Sort Algoritmasi
void simpleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Yer degistirme
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[5];
    int n = 5;

    std::srand(std::time(0));

    // Rastgele deger atama (g)
    for (int i = 0; i < n; ++i) {
        numbers[i] = std::rand() % 100;
    }

    std::cout << "--- Original Array ---" << std::endl;
    printArray(numbers, n);

    // Diziyi siralama
    simpleSort(numbers, n);

    std::cout << "--- Sorted Array (Bubble Sort) ---" << std::endl;
    printArray(numbers, n);

    return 0;
}