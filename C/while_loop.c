#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i < 20)
    {
        printf("%d\n", i % 2);
        i++;
    }

    int j = 6;
    do{
        printf("%d\n", j);
        i++;
    } while (j <= 5);
    return (0);
}

