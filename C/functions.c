#include <stdio.h>
#include <stdlib.h>

int main ()
{
    sayHi("Mario");
    return (0);
}

void sayHi(char fname[])
{
    printf("Hello %s", fname);
}
