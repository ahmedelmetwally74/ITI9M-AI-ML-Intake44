#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int x;
    do{
      printf(" Enter the Number : ");
      scanf("%d",&x);
      sum+=x;
    } while(sum<100);
    printf("%d", sum);
    return 0;
}
