#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i < 20)
    {
        printf("%d", i % 2);
        i++;
    }
    return (0);
}

