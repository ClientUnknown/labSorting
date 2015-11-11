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
	bool flag = true;
	int j = 0;
	int temp;

	// Assume array unsorted to start, loop through array starting with assumption that the array is now sorted
	// If found to be unsorted, set flag to true to indicated not sorted
	while (flag) {
		flag = false;
		j++;
		for (int i = 0; i < size - j; i++) {
			if (array[i] > array[i+1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = true;
			} // end if
		} // end for
	} // end while

	end = clock();
	std::cout << "\t" << diffClocks(end, begin);
}
