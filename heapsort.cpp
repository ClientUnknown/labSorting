// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Implementation file for a heap sort

#include "heapsort.h"

void heapify (int array[], int size) {
	for (int i = size/2; i >= 0; i--) {
		bubbleDown(array, size, i);
	}
}

void heapsort (int array[], int size) {
	clock_t begin, end;
	begin = clock();

	heapify(array, size);
	while ((size-1) > 0) {
		std::swap(array[(size-1)], array[0]);
		bubbleDown(array, size-1, 0);
		size--;
	}

	end = clock();
	std::cout << "\t" << diffClocks(end, begin);
}

void bubbleDown (int array[], int size, int index) {
	int child = (index * 2) + 1;
	while (child < size) {
		if ((child+1 < size) && (array[child+1] >= array[child]))
			child++;

		if (array[index] < array[child]) {
			std::swap(array[child], array[index]);
			index = child;
		} else
			break;
		child = (index * 2) + 1;
	}
}