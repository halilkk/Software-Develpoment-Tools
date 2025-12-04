#include <iostream>
#include <cstdlib>
#include <ctime>


void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void simpleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

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


    for (int i = 0; i < n; ++i) {
        numbers[i] = std::rand() % 100;
    }

    std::cout << "--- Original Array ---" << std::endl;
    printArray(numbers, n);

 
    simpleSort(numbers, n);

    std::cout << "--- Sorted Array (Bubble Sort) ---" << std::endl;
    printArray(numbers, n);

    return 0;
}