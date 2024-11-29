#include "collatz_conjecture.h"

// Function fo Callatz Conjecture 
int steps(int start)
{
    // Return define ERROR_VALUE = -1 if start <= 0
    if (start <= 0) return ERROR_VALUE;

    // Init Steps = 0
    unsigned int steps = 0;

    // while start > 1, loop be run 
    // Module start by 2 -> Logic 0,1 using if conditional for return new vale start
    for(;start > 1; steps++) start = start%2? start*3  + 1 :start /2 ;
    
    return steps;
}