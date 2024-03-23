#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rev_num;
    printf("Enter the Number :");
    scanf("%d", num);

     int originalNumber = num;
        while (num > 0) {
            int digit = num % 10;
            rev_num = rev_num * 10 + digit;
            num /= 10;
        }

        printf("Original number: %d\n", originalNumber);
        printf("Reversed number: %d\n", rev_num);
    return 0;
}
