/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Merge Sort
 * ===========================================================
 */
#ifndef SORT_H
#define SORT_H

// constant representing size of input
#define N 8

// function prototypes
/** -------------------------------------------------------------------
 * @brief Perform a mergesort on a portion of an array, from lBound
 * to rBound
 * @param numbers - the array to sort
 * @param leftBound - the starting index of the sublist to sort
 * @param rightBound - the ending index of the sublist to sort
 * @pre parameters are populated with proper values
 * @post numbers is sorted
 */
void mergeSort(int numbers[], int leftBound, int rightBound);

/** -------------------------------------------------------------------
 * @brief Perform a mergesort on a portion of an array, from lBound
 * to rBound
 * @param numbers - the array to sort
 * @param leftBound - the starting index of the sublist to sort
 * @param mid - the middle index of the sublist to sort
 * @param rightBound - the ending index of the sublist to sort
 * @pre parameters are populated with proper values
 * @post numbers is sorted
 */
void merge(int numbers[], int leftBound, int mid, int rightBound);

/** -------------------------------------------------------------------
 * @brief Fills an array with random values between 0 and 29
 * @param array - the array to fill
 * @pre numbers has been allocated
 * @post array is filled with random numbers
 */
void fillArray(int array[]);

/** -------------------------------------------------------------------
 * @brief Prings an array
 * @param nums - the array to print
 * @pre numbers has been allocated and initialized
 * @post array is printed nums is unmodified
 */
void printArray(int nums[]);

#endif  