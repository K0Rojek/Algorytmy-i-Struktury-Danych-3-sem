#include "functions.h"
#include <iostream>
#include <time.h>
#include <algorithm>


void initArray(int* Array, int array_size) {
    srand(time(NULL));
    for (int i = 0; i < array_size; i++)
        Array[i] = rand() % array_size;
}

void sortArray(int* Array, int array_size) {
    std::sort(Array, Array + array_size);
}


int linearSearch1(int* Array, int array_size, int x) {
    // If the current element matches the value being searched for, return its index.
    for (int i = 0; i < array_size; i++)
        if (Array[i] == x)
            return i;
    // If the value is not found in the array, return -1.
    return -1;
}

int linearSearch2(int* Array, int array_size, int x) {
    // Counter to keep track of the number of iterations.
    int steps = 0;
    for (int i = 0; i < array_size; i++) {
        steps++;
        if (Array[i] == x)
            return i;
    }
    // If the value is not found, return the total number of iterations.
    return steps++;
}

int binarySearch1(int* Array, int array_size, int x) {
    int left = 0; // Index of the leftmost element of the search range.
    int right = array_size - 1; // Index of the rightmost element of the search range.
    while (left <= right) {
        int mid = (left + right) / 2;
        if (Array[mid] == x)
            return mid;
        else if (Array[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int binarySearch2(int* Array, int array_size, int x) {
    int steps = 0; // Initialize a counter for the number of steps taken
    int left = 0; // Index of the leftmost element of the search range.
    int right = array_size - 1; // Index of the rightmost element of the search range.
    while (left <= right) {
        steps++;
        int mid = (left + right) / 2;
        if (Array[mid] == x)
            return mid;
        else if (Array[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return steps++; // If the target value is not found, return the number of steps taken
}