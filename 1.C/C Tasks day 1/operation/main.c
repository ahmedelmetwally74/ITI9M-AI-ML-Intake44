#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int sum;
    int sub;
    int mul;

    scanf("%d %d", &num1, &num2);
    // Addition
    sum = num1 + num2 ;
    // Subtraction
    sub = num1 - num2 ;
    // Multiplication
    mul = num1 * num2 ;
    printf("The Sum is %d", sum);
    printf("\nThe Subtraction is %d", sub);
    printf("\nThe Multiplication is %d", mul);
    return 0;
}
