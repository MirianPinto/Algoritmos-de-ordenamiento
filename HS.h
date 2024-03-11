#pragma once

//Heap Sort
class HS
{
public:
	HS(int* arreglop, int sizep);
	~HS();

	int* HeapSort();
	void heapify(int* arr, int size, int i);
private:
	int size = 0;
	int* arreglo;
};
