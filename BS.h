#pragma once

//Buble Sort
class BS
{
public:
	BS(int* arreglop, int sizep);
	~BS();

	int* BubleSort();

private:
	int size = 0;
	int* arreglo;
};
