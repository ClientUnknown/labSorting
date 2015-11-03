#include "insertionSort.h"

void insertionSort (int array[], int size) {
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
}
