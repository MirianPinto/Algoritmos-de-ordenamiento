#include "SS.h"
#include <iostream>
#include <ctime>
SS::SS(int* arreglop, int sizep)
{
	arreglo = arreglop;
	size = sizep;
}

SS::~SS()
{
	delete[] arreglo;
}

int* SS::SelectionSort()
{
    unsigned t0, t1;
    t0 = clock();

    int swap = 0;
    for (int i = 0; i < size - 1; ++i) {
      
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arreglo[j] < arreglo[min_idx]) {
                min_idx = j;
            }
        }
        // Intercambiarlo con el elemento en la posición actual
        swap = arreglo[i];
        arreglo[i] = arreglo[min_idx];
        arreglo[min_idx] = swap;
        
    }


    t1 = clock();
    double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    std::cout << "Tiempo de ejecución: " << time * 1000 << " milisegundos" << std::endl;

	return arreglo;
}
