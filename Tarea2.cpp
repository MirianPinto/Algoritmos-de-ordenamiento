
#include "Arreglo.h"
#include "IR.h"
#include "SS.h"
#include "BS.h"
#include "MS.h"
#include "HS.h"
#include "QS.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int n = 50000;
    Arreglo* arreglo = new Arreglo(n);

    int* arreglog = arreglo->GeneradorArreglo();
    int* arregloOrde;


    //Insertion Sort
    std::cout << "Tiempo ejecucion usando Insertion sort: \n";
    IR* InsertionSort = new IR(arreglog,n);
    InsertionSort->InsertionSort();
    InsertionSort->~IR();
    
    
    //Selection Sort
    /*std::cout << "Tiempo ejecucion usando Selection sort: \n";
    SS* SelectionSort = new SS(arreglog, n);
    SelectionSort->SelectionSort();
    SelectionSort->~SS();
    */
    
    //Buble Sort
   /* std::cout << "Tiempo ejecucion usando BubleSort: \n";
    BS* BubleSort = new BS(arreglog, n);
    BubleSort->BubleSort();
    BubleSort->~BS();*/
    

    //unsigned t0, t1;
    //t0 = clock();
    ////Merge Sort
   /* std::cout << "Tiempo ejecucion usando MergueSort: \n";
    MS* MergeSort = new MS();
    MergeSort->MergeSort(arreglog,0,n-1);
    */

    //t1 = clock();
    //double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    //std::cout << "Tiempo de ejecución final: " << time * 1000 << " milisegundos" << std::endl;


    //for (int i = 0; i < n; i++)
    //{
    //    cout << "arregloOrde[" << i << "] = " << arregloOrde[i]<< endl;
    //}

    //Heap Sort
    /*std::cout << "Tiempo ejecucion usando HeapSort: \n";
    HS* HeapSort = new HS(arreglog, n);
    HeapSort->HeapSort();
    HeapSort->~HS();*/


    //Quick Sort
    /*std::cout << "Tiempo ejecucion usando QuickSort: \n";
    unsigned t0, t1;
    t0 = clock();
    
    QS* QuickSort = new QS();
    QuickSort->QuickSort(arreglog,0,n-1);
    t1 = clock();

    double time = static_cast<double>(t1 - t0) / CLOCKS_PER_SEC;
    std::cout << "Tiempo de ejecución final: " << time * 1000 << " milisegundos" << std::endl;*/


}

