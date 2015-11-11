// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Header file for a merge sort

#ifndef MERGESORT_H
#define MERGESORT_H

#include "diffClocks.h"

void mergesort (int array[], int size);

void mergesortRec (int array[], int first, int last);

void merge (int array[], int first, int mid, int last);

#endif // for MERGESORT_H