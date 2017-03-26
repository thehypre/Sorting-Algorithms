//
// Created by Radoslaw Kuzicki on 26/03/2017.
//

#ifndef SORTING_COUNTINGSORT_H
#define SORTING_COUNTINGSORT_H

void countingSort(int tab[], int N, int k)
{
    int *b = new int[k]; //temporary array for positioning
    int *c = new int [N]; //sorted array
    for (int i = 0; i < k; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        b[tab[i]]++;
    }
    for (int i = 0; i < k-1; i++)
    {
        b[i+1] += b[i];
    }
    for (int i = 0; i < k; i++)
    {
        b[i]--;
    }
    for (int i = 0; i < N; i++)
    {
        int k = b[tab[i]];
        c[k] = tab[i];
        b[tab[i]]--;
    }
    for (int i = 0; i < N; i++)
    {
        tab[i] = c[i];
    }
    delete b;
    delete c;
}
#endif //SORTING_COUNTINGSORT_H
