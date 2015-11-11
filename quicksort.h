// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// header file for a quick sort

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>
#include <iostream>
#include "diffClocks.h"

void quicksort (int array[], int size);

void quicksortRec (int array[], int first, int last);

int partition (int array[], int first, int last);

#endif // for QUICKSORT_H