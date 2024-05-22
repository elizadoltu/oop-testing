#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int partition(std::vector<T>& arr, int low, int high) {
    T pivot = arr[low]; 
    int i = (low - 1);
    
    for (int j = low; j <= high; j++) { 
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

template <typename T>
void quickSort(std::vector<T>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

#endif
