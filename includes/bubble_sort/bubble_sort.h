// bubble_sort.h
// A function that provides the bubble_sort
// Copyright 2020 bmyjacks

#ifndef _TINYTOOLS_BUBBLE_SORT_H_
#define _TINYTOOLS_BUBBLE_SORT_H_

// bubble_sort
#include <iostream>

void bubbleSort(int bubbleSortArray[]){

}

void bubbleSort(int bubbleSortArray[], int bubbleSortArrayLength)
{
    int bubbleSortTemp = 0;
    for (int i = 0; i < bubbleSortArrayLength - 1; ++i){
        for (int j = 0; j < bubbleSortArrayLength - i - 1; ++j)
            if (bubbleSortArray[j] > bubbleSortArray[j + 1]){
                bubbleSortTemp = bubbleSortArray[j];
                bubbleSortArray[j] = bubbleSortArray[j + 1];
                bubbleSortArray[j + 1] = bubbleSortTemp;
            }
    }
}

#endif
