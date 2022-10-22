#include <stdio.h>
#include <stdlib.h>
/* 2D arrays and nested loops */

int main()
{
    //2D Arrays
    int nums[3][2] = {
                    {1,2},
                    {3,4},
                    {5,6}
                    };
    printf("%d\n", nums[1][1]);

    //Nested for loops
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\n", nums[i][j]);
        }
    }
    return (0);
}

