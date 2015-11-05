// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Implementation file for an insertion sort method

#include "insertionSort.h"
#include "diffClocks.h"

// Conducts an insertion sort operation on the passed array
void insertionSort (int array[], int size) {
	clock_t begin, end;
	begin = clock();
	for (int i = 1; i <= size - 1; i++) {
		int temp = array[i];
		int j = i -1;
		while (j >= 0) {
			if (array[j] > temp) {
				array[j+1] = array[j];
				j--;
			} else {
				break;
			}
		}
		array[j+1] = temp;
	}
	end = clock();
	std::cout << "\t" << diffClocks(end, begin);
}
