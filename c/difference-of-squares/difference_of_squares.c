#include "difference_of_squares.h"

// Using general equation to Solve

// Sum of squares function
unsigned int sum_of_squares(unsigned int number)
{
    return (number) * (number+ 1) * (2*number + 1) / 6;  
}

// Square of sum  function
unsigned int square_of_sum(unsigned int number)
{
    return (number*  (number + 1)) * (number*  (number + 1)) / 4;
}

// Difference of squares function
unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number) - sum_of_squares(number);
}

