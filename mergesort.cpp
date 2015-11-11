// Muhammad Abed
// CSCI 3110 - 002
// Lab Sorting
// 11/11/15
// Implementation file for a merge sort

#include "mergesort.h"

// Function that performs a merge sort on the passed array, simply kicks off the recursion
void mergesort (int array[], int size) {
	clock_t begin, end;
	begin = clock();

	mergesortRec (array, 0, size-1);

	end = clock();
	std::cout << "\t" << diffClocks(end, begin);
}

// Recursively implements a merge sort on the passed array
void mergesortRec (int array[], int first, int last) {
	// Base case
	if (first < last) {
		int mid = first + (last-first) / 2;
		mergesortRec (array, first, mid);
		mergesortRec (array, mid + 1, last);
		merge (array, first, mid, last);
	}
}

// Steps through the two halves of the array, copying them into a temporary array and then
// copying the temporary array over the original array
void merge (int array[], int first, int mid, int last) {
	int leftSize = mid - first + 1;
	int rightSize = last - mid;
	int i, j, k;

	// Create two temporary arrays for the left and right halves
	int* left = new int[leftSize];
	int* right = new int[rightSize];

	// Loop through both temp arrays
	for (i = 0; i < leftSize; i++) {
		left[i] = array[first + i];  // Fill the left half array with the left half of the original array
	}
	for (i = 0; i < rightSize; i++) {
		right[i] = array[mid + 1 + i];  // Fill the right half array with the right half of the original array
	}

	i = 0; j= 0; // Reset the indices
	k = first;   // Start k at the beginning of the array

	// Loop through both halves of the array at the same time
	while ( i < leftSize && j < rightSize) {
		if (left[i] <= right[j]) { // Fill in the original array from the left and right halves, taking the smaller of the two values
			array[k] = left[i];
			i++;
		}
		else {
			array[k] = right[j];
			j++;
		}
		k++;
	}

	// Copy the temporary half arrays over the original array
	while (i < leftSize) {
		array[k] = left[i];
		i++;
		k++;
	}

	while (j < rightSize) {
		array[k] = right[j];
		j++;
		k++;
	}
}