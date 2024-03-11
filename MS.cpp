#include "MS.h"
#include <iostream>

MS::MS()
{
	
}

MS::~MS()
{
	
}

int* MS::MergeSort(int* arregloM, int p, int r)
{
   /* unsigned t0, t1;
    t0 = clock();*/
	if (p < r) {
		int q = (p + r) / 2;
		MergeSort(arregloM, p, q);
		MergeSort(arregloM, q + 1, r);
		Merge(arregloM, q, p, r);
	}

    /*t1 = clock();
    double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    std::cout << "Tiempo de ejecución: " << time * 1000 << " milisegundos" << std::endl;
    */
	return arregloM;
}

void MS::Merge(int* arregloM, int q, int p, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    // Crear arreglos temporales
    int* L = new int[n1];
    int* R = new int[n2];

    // Copiar datos a los arreglos temporales L[] y R[]
    for (int i = 0; i < n1; i++)
        L[i] = arregloM[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arregloM[q + 1 + j];

    // Mezclar los arreglos temporales de vuelta en arr[p..r]
    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arregloM[k] = L[i];
            i++;
        }
        else {
            arregloM[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si hay alguno
    while (i < n1) {
        arregloM[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si hay alguno
    while (j < n2) {
        arregloM[k] = R[j];
        j++;
        k++;
    }
	
}
