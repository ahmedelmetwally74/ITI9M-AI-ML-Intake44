#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5];
    int i;
    int sum=0;
    int max;
    int min;
    int search;
    // The Sum
    for(i=0;i<5;i++){
        printf("\tEnter the no. %d = ", i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
       // printf("\t The sum until now is %d\n", sum);
    }
    printf("\n The Total sum is %d\n", sum);

    // The Maximum Code

    max = arr[0];
    for(i=0;i<5;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("\n The Maximum Value is %d", max);

    // The Minimum Code

    min = arr[0];
    for(i=0;i<5;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("\n The Minimum Value is %d", min);

    // The Target or Search
    printf("\n Enter the Value you want to search for : ");
    scanf("%d",&search);

    for(i=0;i<5;i++){
        if(search==arr[i]){
          printf("It is the %d value you entered\n", i+1);
          break;
        }
    }

    /*
    if(search == arr[0])
        printf("The value is the %d value you entered", i+1);
    else if(search = arr[1])
        printf("The value is the %d value you entered", i+1);
    else if(search = arr[2])
        printf("The value is the %d value you entered", i+1);
    else if(search = arr[3])
        printf("The value is the %d value you entered", i+1);
    else if(search = arr[4])
        printf("The value is the %d value you entered", i+1);*/


    return 0;
}
