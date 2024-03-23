#include <stdio.h>
#include <stdlib.h>

void printv1();

int main()
{
    printv1(9);
    return 0;
}
void printv1(int n){
    int fac=1;

    int i;


    //printf("Enter the positive Number : ");
    //scanf("%d", &n);
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
}
