#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(std::vector<T>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 2; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

#endif
