#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac=1;
    int n=0;
    int i;


    printf("Enter the positive Number : ");
    scanf("%d", &n);
   // printf("the number is %d", n);
    // check if the number is +ve
    if(n<0){
        printf("Factorial is not defined for negative numbers.\n");
    }else if(n>0) {
        for (i=1;i<=n;i++){
        fac=fac*i;
        }
        printf("The Factorial of %d is : %d" ,n,fac);
    }

    return 0;
}
