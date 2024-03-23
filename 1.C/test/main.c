#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows,cols;
    printf("Enter the Number of Rows: ");
    scanf("%d", &rows);
    printf("Enter the Number of Columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        printf("Enter the value of element[%d,%d]:",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    printf("The Array =\n");
    // Loop for printing
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        printf("%d\t",arr[i][j]);

        }
        printf("\n");
    }
    printf("The Results for the students\n");
    int sum[i];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        sum[i]= sum[i] + arr[rows][cols];
        }
        printf("The total degrees for the students: %d\n", sum[i]);
    }

    /*int arr[5]={0};
    int i,sum=0;
    int max;
    int min;

    // Loop for Scan the values and find Sum
    for (i=0;i<5;i++){
        printf("Enter the Number: ");
        scanf("%d",&arr[i]);
        sum =sum +arr[i];
        }
    max=min=arr[0];
    // Loop for the find max and min
    for(i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The sum = %d",sum);
    printf("\nThe Maximum number = %d",max);
    printf("\nThe Minimum Number = %d",min);*/




    /*int i=0,n=0;
    printf("Enter the stop Number: ");
    scanf("%d",&n);
    while(i<n){
        printf("%d\n",i+1);
        i++;
    }*/


    /*int n,sum=0;
    do{
        printf("Enter the Number: ");
        scanf("%d", &n);
        sum= sum+n;
    }while(sum<100);

    printf("%d", sum);*/

    /*int i,n;
    printf("Enter the stop number :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d\n",i+1);

    }*/

    return 0;
}
