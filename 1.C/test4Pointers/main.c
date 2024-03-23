#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={1,10,20,30,40};
    int i;
    int *ptr=arr;
    printf("\n%d",*ptr);

    printf("The Regular print:");
    for (i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("\nThe Output from the pointers:\n");
    for (i=0;i<5;i++)
    {
        printf("%d\t:\t%d\n",*(ptr+i),ptr[i]);
    }
    printf("Test something:");
    for (i=0;i<5;i++)
    {
        printf("\n%d",*(ptr+i));
    }
    printf("\n%d",*ptr);
    return 0;
}
