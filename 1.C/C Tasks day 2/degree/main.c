#include <stdio.h>
#include <stdlib.h>

int main()
{

    int deg;
    printf("Enter Your Degree : ");
    scanf("%d",&deg);
    if(deg < 60){
        printf("Fail");
    } else if(deg <70 && deg >= 60 )
        printf("Acceptable");
      else if(deg <80 && deg >= 70 )
        printf("Good");
      else if(deg <90 && deg >= 80 )
        printf("Very Good");
      else if(deg <=100 && deg >= 90 )
        printf("Excellent");
    return 0;
}
