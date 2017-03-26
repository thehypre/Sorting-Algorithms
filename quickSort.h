//
// Created by Radoslaw Kuzicki on 26/03/2017.
//

#ifndef SORTING_QUICKSORT_H
#define SORTING_QUICKSORT_H
int partition (int tab[], int left, int right)
{
    int i = left;
    int j = right;
    int pivot = tab[(left+right)/2];

    while (i <= j)
    {
        while (tab[i] < pivot)
            i++;
        while (tab[j] > pivot)
            j--;
        if (i <= j) {
            swap(tab[i], tab[j]);
            i++;
            j--;
        }
    }
    return i;
}

void quickSort (int tab[], int left, int right)
{
    int index = partition(tab, left, right);
    if (left < index - 1)
        quickSort(tab, left, index-1);
    if (index < right)
        quickSort(tab, index, right);
}
#endif //SORTING_QUICKSORT_H
