#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/**
 * This function performs linear search on an integer array to find the first occurrence of a given value.
 * @param Array: A pointer to the first element of the integer array to search.
 * @param array_size: The number of elements in the array.
 * @param x: The value to search for in the array.
 * @return If the value is found in the array, the function returns the index of its first occurrence. Otherwise, it returns -1.
 */
int linearSearch1(int* Array, int array_size, int x);

/**
 * This function performs linear search on an integer array to find the first occurrence of a given value.
 * @param Array: A pointer to the first element of the integer array to search.
 * @param array_size: The number of elements in the array.
 * @param x: The value to search for in the array.
 * @return If the value is found in the array, the function returns the index of its first occurrence. If the value is not found in the array, the function returns the total number of iterations it took to search the entire array.
 */
int linearSearch2(int* Array, int array_size, int x);

/**
 * This function performs binary search on a sorted integer array to find the first occurrence of a given value.
 * @param Array: A pointer to the first element of the sorted integer array to search.
 * @param array_size: The number of elements in the array.
 * @param x: The value to search for in the array.
 * @return If the value is found in the array, the function returns the index of its first occurrence. Otherwise, it returns -1.
 */
int binarySearch1(int* Array, int array_size, int x);

/**
 * This function performs binary search on a sorted integer array to find the first occurrence of a given value.
 * @param Array: A pointer to the first element of the sorted integer array to search.
 * @param array_size: The number of elements in the array.
 * @param x: The value to search for in the array.
 * @return If the value is found in the array, the function returns the index of its first occurrence. If the value is not found in the array, the function returns the total number of iterations it took to search the entire array.
 */
int binarySearch2(int* Array, int array_size, int x);

#endif