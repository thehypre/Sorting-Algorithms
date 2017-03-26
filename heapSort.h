//
// Created by Radoslaw Kuzicki on 25/03/2017.
//

#ifndef SORTING_HEAPSORT_H
#define SORTING_HEAPSORT_H
void heapify (int tab[], int N, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    //if left is larger than root
    if (left < N and tab[left] > tab[largest])
        largest = left;
    //if right is larger than largest
    if (right < N and tab[right] > tab[largest])
        largest = right;
    //if largest is not a root
    if (largest != i)
    {
        swap (tab[i], tab[largest]);
        //recursively heapify subtree
        heapify (tab, N, largest);
    }
}

void heapSort(int tab[], int N)
{
    for (int i = (N/2) - 1; i >= 0; i--)
        heapify(tab, N, i);
    for (int i = N-1; i >=0; i--)
    {
        swap (tab[0], tab[i]);
        heapify(tab, i, 0);
    }
}
#endif //SORTING_HEAPSORT_H
