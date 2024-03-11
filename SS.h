#pragma once


//Selection Sort
class SS
{
public:
	SS(int* arreglop, int sizep);
	~SS();

	int* SelectionSort();

private:
	int size = 0;
	int* arreglo;
};
