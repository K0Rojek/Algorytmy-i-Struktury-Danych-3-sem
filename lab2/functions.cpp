#include "functions.h"
#include <iostream>
#include <time.h>
#include <algorithm>

int linearSearch1(int* Array, int array_size, int x) {
    // If the current element matches the value being searched for, return its index.
    for (int i = 0; i < array_size; i++)
        if (Array[i] == x)
            return i;
    // If the value is not found in the array, return -1.
    return -1;
}