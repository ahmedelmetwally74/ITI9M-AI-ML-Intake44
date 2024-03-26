#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements you want in the array: ";
    std::cin >> n;

    // Create dynamic array using new
    int* arr = new int[n];

    // Take data of array from user
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Print the array
    std::cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
