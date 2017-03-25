//
// Created by Radoslaw Kuzicki on 25/03/2017.
//

#ifndef SORTING_SELECTIONSORT_H
#define SORTING_SELECTIONSORT_H

int getMinIndex (int tab[], int N, int i)
{
    int min = i;
    for (int j = i+1; j < N; j++)
    {
        if (tab[j] < tab[min])
            min = j;
    }
    return min;
}

void selectionSort (int tab[], int N)
{
    int min;
    for (int i = 0; i < N; i++)
    {
        min = getMinIndex(tab, N, i);
        if (min != i)
            swap(tab[i], tab[min]);
    }
}
#endif //SORTING_SELECTIONSORT_H
