#pragma once



class Arreglo
{
public:
	Arreglo(int sizep);
	~Arreglo();


	int* GeneradorArreglo();

private:
	int size = 0;

};

