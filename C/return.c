#include <stdio.h>
#include <stdlib.h>

/**
 * any function that returns a type should be placed above main
 */

 double cube (double num)
 {
     double result = num * num * num;
     return result;
 }

int main ()
{
    printf("Answer: %f", cube(4.8));
    return (0);
}
