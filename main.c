/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Merge Sorts
 * ===========================================================
 * Instructions:
 *    1) Complete TASKS Below
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortfuncts.h"

int main() {
    int nums[N];

    // set up for and then seed random number generator
    srand((unsigned)(time(NULL)));  // use for development/debugging
    srand(2023); // uncomment for submission

    /* 
     * TASK 0 - implement the function, mergeSort() 
     */
    fillArray(nums);
    printf("Merge Sort: ");
    mergeSort(nums, 0, N - 1);
    printArray(nums);

    return 0;
}