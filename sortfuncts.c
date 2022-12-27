/** lab08functs.c
 * ===========================================================
 * Name: CS220
 * Section: n/a
 * Project: Lab 8 - Merge Sort
 * ===========================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sortfuncts.h"

/**
 * @brief Given two sorted sublists array[lBound..mid] and array[mid+1..rBound],
 * merge them into a single sorted list in array[lBound..rBound]
 * @param array - the array to sort
 * @param lBound - the lowest index of the first sublist
 * @param mid - the highest index of the first sublist
 * @param rBound - the highest index of the second sublist
 */
void merge(int numbers[], int lBound, int mid, int rBound) {
    int tempArray[N];
    // Copy the first sublist into the tempArray
    for (int j = lBound; j <= mid; j++) {
        tempArray[j] = numbers[j];
    }
    // Copy the second sublist into the tempArray
    for (int j = mid + 1, k = rBound; j <= rBound; j++, k--) {
        tempArray[k] = numbers[j];
    }

    // Merge the two sublists
    int j = lBound;
    int k = rBound;
    int i = lBound;
    while (j <= k) {
        if (tempArray[j] < tempArray[k]) {
            numbers[i] = tempArray[j];
            j++;
        } else {
            numbers[i] = tempArray[k];
            k--;
        }
        i++;
    }
}

// mergeSort
void mergeSort(int numbers[], int lBound, int rBound) {
    if (lBound < rBound) {
        int mid = (lBound + rBound) / 2;
        mergeSort(numbers, lBound, mid);
        mergeSort(numbers, mid + 1, rBound);

        merge(numbers, lBound, mid, rBound);
        // printArray(numbers);
    }
}

// fills an array of size n with random values
void fillArray(int array[]) {
    // fill array with random ints from 0 to 99
    for (int i = 0; i < N; i++) {
        array[i] = (int)rand() % 100;
    }
}

// printArray
void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}