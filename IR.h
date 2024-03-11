#pragma once


//Insertion Sort
class IR
{
public:
	IR(int* arreglop, int sizep);
	~IR();

	int* InsertionSort();

private:
	int size = 0;
	int* arreglo;
};

