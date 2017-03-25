//
// Created by Radoslaw Kuzicki on 25/03/2017.
//

#ifndef SORTING_HEAPSORT_H
#define SORTING_HEAPSORT_H

void heapify(int tab[], int heapSize, int i) //procedura naprawiania kopca, wywolywana rekurencyjnie dla calego kopca
//N to rozmiar kopca
{
    int largest;
    int temp;
    int left = 2*i;
    int right = (2*i) + 1;
    if (left <= heapSize and tab[left] > tab[i])
        largest = left;
    if (right <= heapSize and tab[right] < tab[largest])
        largest = right;
    if (largest != i)
    {
        temp = tab[largest];
        tab[largest] = tab[i];
        tab[i] = temp;
        heapify(tab, heapSize, largest);
    }
}

void buildHeap (int tab[], int heapSize)
{
    for (int i = heapSize/2; i> 0; i--)
        heapify(tab, heapSize, i);
}

void heapSort(int tab[], int N)
{
    int temp;
    buildHeap(tab, N);
    for (int i = N; i > 1; i--)
    {
        temp = tab[i];
        tab[i] = tab[1];
        tab[1] = temp;
        N--;
        heapify(tab, N, 1);
    }
}

#endif //SORTING_HEAPSORT_H
