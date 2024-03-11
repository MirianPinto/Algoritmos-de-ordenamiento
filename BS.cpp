#include "BS.h"
#include <iostream>
#include <ctime>
BS::BS(int* arreglop, int sizep)
{
	arreglo = arreglop;
	size = sizep;
}

BS::~BS()
{
	delete[] arreglo;
}

int* BS::BubleSort()
{
    unsigned t0, t1;
    t0 = clock();

    int swap = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                swap = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = swap;
                
            }
        }
    }

    t1 = clock();
    double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    std::cout << "Tiempo de ejecución: " << time * 1000 << " milisegundos" << std::endl;
    t1 = clock();

	return arreglo;
}
