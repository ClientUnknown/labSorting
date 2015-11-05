// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Implementation file for a bubble sort method

#include "bubbleSort.h"
#include <algorithm>

void bubbleSort (int array[], int size) {
	clock_t begin, end;
	begin = clock();

	for (int i = size-1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (array[j] > array[j+1])
				std::swap(array[j], array[j+1]);
		}
	}

	end = clock();
	std::cout << "\t" << diffClocks(end, begin);
}
