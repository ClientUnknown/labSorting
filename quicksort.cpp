// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Implementation file for a quick sort

#include "quicksort.h"
#include "insertionSort.h"

// Function that implements a quick sort, kicks off the recursion
void quicksort (int array[], int size) {
	clock_t begin, end;
	begin = clock();

	quicksortRec(array, 0, size-1);

	end = clock();
	std::cout << "\t" << diffClocks(end, begin);
}

// Recursively implements a quick sort
void quicksortRec (int array[], int first, int last) {
	int pivotIndex;
	if (first < last) { // base case
		pivotIndex = partition(array, first, last);
		quicksortRec(array, first, pivotIndex - 1);
		quicksortRec(array, pivotIndex + 1, last);
	}
}

// Breaks the array into partitions, based around the pivot
int partition (int array[], int first, int last) {
	int pivotIndex;
	int p;
	int mid = first + (first - last)/2;
	int i, j;
	/*if ((array[first] <= array[mid] && array[mid] <= array[last]) || (array[last] <= array[mid] && array[mid] <= array[first]))
		p = mid;
	else if ((array[mid] <= array[first] && array[first] <= array[last]) || (array[last] <= array[first] && array[first] <= array[mid]))
		p = first;
	else if ((array[mid] <= array[last] && array[last] <= array[first]) || (array[first] <= array[last] && array[last] <= array[mid]))
		p = last;
	else*/
		p = first;
	pivotIndex = array[p];
	if (p != first)
		std::swap(array[p], array[first]);
	// Loop through the array, comparing the current index to the pivot
	i = first + 1;
	j = last;
	while (i <= j) {
		while (i <= j && array[i] <= pivotIndex)
			i++;
		while (i <= j && array[j] > pivotIndex)
			j--;
		if (i < j)
			std::swap(array[i], array[j]);
	}

	std::swap(array[i-1], array[first]);
	return i-1;
}

