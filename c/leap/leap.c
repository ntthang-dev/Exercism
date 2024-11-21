/* C Program check leap year*/

#include "leap.h"

bool leap_year(int year) 
{

    // Return using conditional operator 
    // If year divisible by 400 or 4 return true , if divisible by 100 return false 
    return (year % 400 == 0) 
        ? true 
        : (year % 4 == 0) ? (year % 100 != 0): 
            false ? true : false ;
}
