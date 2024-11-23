#include "difference_of_squares.h"

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

unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number) - sum_of_squares(number);
}

