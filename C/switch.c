#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'G';

    switch(grade)
    {
    case 'A' :
        printf("You did excellently well");
        break;
    case 'B' :
        printf("You did fairly well");
        break;
    case 'C' :
        printf("You did averagely");
        break;
    case 'D' :
        printf("You did bad");
        break;
    case 'E' :
        printf("You did poorly");
        break;
    default :
        printf("You scored an invalid grade");
    }

    return (0);
}
