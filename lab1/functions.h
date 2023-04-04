#ifndef FUNCTIONS_H
#define FUNCTIONS_H


/**
 * This function calculates the sum of all positive integer divisors of a given number (excluding itself).
 * @param number: The integer number for which the sum of divisors needs to be calculated.
 * @return The sum of all positive integer divisors of the given number.
 */
int f_div_sum(int number);

/**
 * This function checks whether a given integer is a perfect number or not. A perfect number is a positive integer that is equal to the sum of its positive integer divisors (excluding itself).
 * @param number: The integer number to be checked for being a perfect number.
 * @return A boolean value indicating whether the given number is a perfect number (true) or not (false).
 */
bool isPerfect(int number);

/**
 * This function finds and prints all the perfect numbers in a given range of integers.
 * @param low: The lower bound of the range of integers to search for perfect numbers.
 * @param high: The upper bound of the range of integers to search for perfect numbers (exclusive).
 */
void allPerfect(int low, int high);


/**
 * This function checks whether two given integers are amicable pairs or not.
 * @param a: The first integer to check for being part of an amicable pair.
 * @param b: The second integer to check for being part of an amicable pair.
 * @return A boolean value indicating whether the given integers are an amicable pair (true) or not (false).
 */
bool areAmicable(int a, int b);

/**
 * This function finds and prints all the amicable pairs of integers in a given range.
 * @param low: The lower bound of the range of integers to search for amicable pairs.
 * @param high: The upper bound of the range of integers to search for amicable pairs.
 */
void allAmicable(int low, int high);
#endif
