#include <stdio.h>
#include <stdlib.h>

void power();

int main()
{
    power();
    return 0;
}
void power()
{
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
}
