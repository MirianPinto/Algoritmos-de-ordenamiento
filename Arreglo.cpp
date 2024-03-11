#include "Arreglo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Arreglo::Arreglo(int sizep)
{
	size = sizep;
}

Arreglo::~Arreglo()
{
	
}

int* Arreglo::GeneradorArreglo()
{
	srand(time(NULL));
	int* arreglo = new int[size]; // Crear un arreglo dinámico en el heap
	for (int i = 0; i < size; ++i) {
		arreglo[i] = rand() % 10001;
	}


	return arreglo;
}
