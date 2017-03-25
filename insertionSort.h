//
// Created by Radoslaw Kuzicki on 25/03/2017.
//

#ifndef SORTING_INSERTIONSORT_H
#define SORTING_INSERTIONSORT_H
void insertionSort (int tab[], int N)
{
    int j, key;
    for (int i = 1; i < N; i++)
    {
        key = tab[i];
        j = i-1;
        while (j>= 0 and tab[j] > key)
        {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = key;
    }
}

#endif //SORTING_INSERTIONSORT_H
