#include"functions.h"
#include<iostream>

int f_div_sum(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            sum += i;
    }
    return sum;
}

bool isPerfect(int number)
{
    if (number == f_div_sum(number)) // Check if the given number is equal to the sum of its positive integer divisors (excluding itself).
        return true;

    return false;
}

void allPerfect(int low, int high)
{
    for (int i = low; i < high; i++)
        if (i == f_div_sum(i))
            std::cout << i << " "; // If it is a perfect number, print it to the console.
}

bool areAmicable(int a, int b)
{
    // Check if the two given integers are part of an amicable pair, by comparing the sum of their proper divisors.
    if (a == f_div_sum(b) && b == f_div_sum(a))
        return true;

    return false;
}

void allAmicable(int low, int high)
{
    int sum_i = 0;
    for (int i = low; i < high; i++)
    {
        // Calculate the sum of the proper divisors of the current integer.
        sum_i = f_div_sum(i);
        if (sum_i < high)
        {
            int j = sum_i;
            // Check if the current integer and its sum of proper divisors form an amicable pair.
            if (i == f_div_sum(j) && j == sum_i)
                std::cout << sum_i << " " << j << std::endl;
        }
    }
}