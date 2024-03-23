#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_name[10] = "Ahmed";
    char last_name[10] = "Elmetwally";
    char full_name[25] = " ";

    strcpy(full_name,first_name);
    strcpy(full_name," ");
    strcpy(full_name,last_name);

    printf("Name = %s" ,full_name);


    return 0;
}
