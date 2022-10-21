
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[15];
    char noun[12];
    char celeb[20];

    printf("enter a color: ");
    scanf("%s", color);

    printf("enter a plural noun: ");
    scanf("%s", noun);

    printf("enter a celebrity: ");
    scanf("%s", celeb);

   printf("Roses are %s\n", color);
   printf("%s are blue\n", noun);
   printf("I love %s\n", celeb);

   return (0);

}
