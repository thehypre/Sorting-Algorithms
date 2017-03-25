#include <iostream>
#include <algorithm>
#include <cstdio>
#include "bubblesort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "heapSort.h"
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

int main() {
    int table[N] = {67, 3, 832, 38, 81, 93, 128, 4, 18, 4, 15, 912, 127, 95, 11, 53, 339 ,138, 193, 130};
    int tableBubbleSorted[N];
    tableEquals(tableBubbleSorted, table, N);
    bubbleSort(tableBubbleSorted, N);
    print(table, N);
    print(tableBubbleSorted, N);
    int tableInsertionSorted[N];
    tableEquals(tableInsertionSorted, table, N);
    insertionSort(tableInsertionSorted, N);
    print(tableInsertionSorted, N);
    int tableSelectionSorted[N];
    tableEquals(tableSelectionSorted, table, N);
    selectionSort(tableSelectionSorted, N);
    print(tableSelectionSorted, N);
    int *heapSortedTable = new int[N];
    tableEquals(heapSortedTable, table, N);
    heapSort(heapSortedTable, N);
    print(heapSortedTable, N);
}