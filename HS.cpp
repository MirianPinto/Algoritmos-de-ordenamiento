#include "HS.h"
#include <ctime>
#include <iostream>
HS::HS(int* arreglop, int sizep)
{
	arreglo = arreglop;
	size = sizep;
}

HS::~HS()
{
	delete[] arreglo;
}

int* HS::HeapSort()
{
    unsigned t0, t1;
    t0 = clock();
    int swap = 0;
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arreglo, size, i);

    // Extraer elementos uno por uno del montículo
    for (int i = size - 1; i >= 0; i--) {
        swap = arreglo[0];
        arreglo[0] = arreglo[i];
        arreglo[i] = swap;
        heapify(arreglo, i, 0);
    }

    t1 = clock();
    double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    std::cout << "Tiempo de ejecución: " << time * 1000 << " milisegundos" << std::endl;

	return arreglo;
}

void HS::heapify(int* arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int swap = 0;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap = arr[i];
        arreglo[i] = arr[largest];
        arreglo[largest] = swap;
        heapify(arr, n, largest);
    }
    
}
