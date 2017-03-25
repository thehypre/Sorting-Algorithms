//
// Created by Radoslaw Kuzicki on 25/03/2017.
//

#ifndef SORTING_BUBBLESORT_H
#define SORTING_BUBBLESORT_H

using namespace std;
void bubbleSort (int tab[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if (tab[j] > tab[j+1])
                swap(tab[j], tab[j+1]);
        }
    }
}

#endif //SORTING_BUBBLESORT_H
