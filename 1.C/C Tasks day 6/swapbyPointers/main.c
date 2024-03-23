#include <stdio.h>
#include <stdlib.h>
void swap(int* x,int* y);

int main()
{
    int a,b;
    printf("Enter the first Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\nAfter the Swap Funcation:-\n");
    printf("A=%d",a);
    printf("\nB=%d",b);

    return 0;
}
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

/* wrong Swap:because it is call by value not by Address
and I can't return 2 values from the function
void swap(int x,int y);

int main()
{
    int a=20,b=10;
    swap(a,b);
    printf("A=%d",a);
    printf("\nB=%d",b);

    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
*/
