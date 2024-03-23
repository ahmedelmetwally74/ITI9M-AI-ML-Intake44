#include <stdio.h>
int primeNumbers(int num){
    int i;
    if(num<2){
        return 0;
    }
    for (i=2;i<num*num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

int countNumbers(int low,int high)
{
    int count=0;
    int i=0;
    for (i=low;i<high;i++){
        if(primeNumbers(i))
            count++;
    }
    return count;
}
int main() {
    int low,high;
    printf("Enter the lower number: ");
    scanf("%d",&low);
    printf("Enter the higher number: ");
    scanf("%d",&high);
    printf("Count of prime numbers between %d and %d is %d", low, high, countNumbers(low, high));
    return 0;
}
