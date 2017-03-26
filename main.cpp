#include <iostream>
#include <algorithm>
#include <cstdio>
#include "bubblesort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "heapSort.h"
#include "quickSort.h"
#include "countingSort.h"
using namespace std;

void tableEquals(int tab1[], int tab2[], int N)
{
    for (int i =0; i < N; i++)
    {
        tab1[i] = tab2[i];
    }
}

void print(int table[], int size)
{
    for (int i = 0; i < size; i++)
        cout << table[i] << " ";
    cout << endl;
}

const int N = 20;
const int N2 = 8;

int main() {
    int table[N] = {67, 3, 832, 38, 81, 93, 128, 4, 18, 4, 15, 912, 127, 95, 11, 53, 339 ,138, 193, 130};
    int tableBubbleSorted[N];
    tableEquals(tableBubbleSorted, table, N);
    bubbleSort(tableBubbleSorted, N);
    cout << "This is the table to sort" << endl;
    print(table, N);
    cout << "Test bubble sort" << endl;
    print(tableBubbleSorted, N);
    int tableInsertionSorted[N];
    tableEquals(tableInsertionSorted, table, N);
    cout << "Test insertion sort" << endl;
    insertionSort(tableInsertionSorted, N);
    print(tableInsertionSorted, N);
    int tableSelectionSorted[N];
    tableEquals(tableSelectionSorted, table, N);
    selectionSort(tableSelectionSorted, N);
    cout << "Test selection sort" << endl;
    print(tableSelectionSorted, N);
    int *heapSortedTable = new int[N];
    tableEquals(heapSortedTable, table, N);
    heapSort(heapSortedTable, N);
    cout << "Test heapsort" << endl;
    print(heapSortedTable, N);
    int *quickSortedTable = new int[N];
    tableEquals(quickSortedTable, table, N);
    quickSort(quickSortedTable, 0, N-1);
    cout << "Test quicksort" << endl;
    print(quickSortedTable, N);

    //Now we create array of numbers from 1 to 9 for the purpose of counting sort
    int table_c[N2] = {1, 7, 0, 3, 8, 5, 2, 5};
    int *tableCountingSorted = new int [N2];
    tableEquals(tableCountingSorted, table_c, N2);
    cout << "Table to sort by counting sort" << endl;
    print(table_c, N2);
    countingSort(tableCountingSorted, N2, 9);
    cout << "Test counting sort" << endl;
    print(tableCountingSorted, N2);
}