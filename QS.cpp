#include "QS.h"
#include <ctime>
#include <iostream>
QS::QS()
{
	
}

QS::~QS()
{
	
}

int* QS::QuickSort(int* arr, int start, int end)
{
    
    
    if (start < end) {
        int pivot = partition(arr, start, end);
        // Ordenamos recursivamente los subarrays
        QuickSort(arr, start, pivot - 1); // Subarray con elementos menores que el pivote
        QuickSort(arr, pivot + 1, end);   // Subarray con elementos mayores que el pivote
    }
    
	return arr;
}


int QS::partition(int a[], int start, int end) {
    
    int pivot = a[end];
    int pIndex = start;
    int swap = 0;
    for (int i = start; i < end; i++) {
        if (a[i] <= pivot) {
            swap = a[i];
            a[i] = a[pIndex];
            a[pIndex] = swap;
            pIndex++;
        }
    }
    swap = a[pIndex];
    a[pIndex] = a[end];
    a[end] = swap;
    return pIndex;
}