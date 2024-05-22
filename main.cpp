#include <iostream>
#include <vector>
#include "bubblesort.h"
#include "quicksort.h"
#include "mergesort.h"
//bubble sort - Doltu Eliza-Teodora
//quick sort - Oprea Danut-Constantin
//merge sort - Panaite Alexandra
int main() {
    std::vector<int> arr1 = {10, 7, 8, 9, 1, 5};
    std::vector<int> arr2 = {10, 9, 8, 7, 6, 5};
    std::vector<int> arr3 = { 10, 9, 8, 7, 6, 5 };
    int n = static_cast<int>(arr1.size());
    
    bubbleSort(arr1);
    std::cout << "Sorted array1 (Bubble Sort): ";
    for (const auto& el : arr1) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    
    quickSort(arr2, 0, n - 1);
    std::cout << "Sorted array2 (Quick Sort): ";
    for (const auto& el : arr2) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    
    mergeSort(arr3, 0, n - 1);
    std::cout << "Sorted array3 (Merge Sort): ";
    for (const auto& el : arr3) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
    return 0;
}
