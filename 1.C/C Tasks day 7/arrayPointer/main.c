#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    int i;
    int arr[size]= {10,20,30,40,50};
    int* ptr = arr;
    for(i=0; i<size; i++)
    {
        printf("\n %d",*(ptr+i));
    }
    printf("\n------------");
    for(i=0; i<size; i++)
    {
        printf("\n %d",arr[i]);
    }
    printf("\n------------");
    for(i=0; i<size; i++)
    {
        printf("\n %d",*(arr+i));
    }
    printf("\n------------");
    for(i=0; i<size; i++)
    {
        printf("\n %d",ptr[i]);
    }
    return 0;
}
