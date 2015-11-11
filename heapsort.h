// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Header file for a heapsort

#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <algorithm>
#include "diffClocks.h"

void heapsort (int array[], int size);

void heapify (int array[], int size);

void bubbleDown (int array[], int size, int index);

#endif // for HEAPSORT_H