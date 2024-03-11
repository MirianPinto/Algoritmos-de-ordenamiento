#include "IR.h"
#include <iostream>
#include <ctime>
IR::IR(int* arreglop, int sizep)
{
	arreglo = arreglop;
	size = sizep;

}

IR::~IR()
{
    delete[] arreglo;
}

int* IR::InsertionSort()
{
    unsigned t0, t1;
    t0 = clock(); 
    
    for (int i = 1; i < size; ++i) {
        int key = arreglo[i];
        int j = i - 1;

        
        while (j >= 0 && key < arreglo[j]) {
            arreglo[j + 1] = arreglo[j];
            --j;
        }

        arreglo[j + 1] = key;
    }

    t1 = clock();
    double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    std::cout << "Tiempo de ejecución: " << time * 1000 << " milisegundos" << std::endl;
	return arreglo;
}
