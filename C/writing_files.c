#include <stdio.h>
#include <stdlib.h>
  /*
    * fprintf(fpointer, "Jim, Salesman\nMiss O, Admin\nMrs Adetutu, CEO\nVinvent, Robotics");
    */

int main()

{
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nMrs Treasure, Business & Marketing");



    fclose(fpointer);
    return (0);
}

