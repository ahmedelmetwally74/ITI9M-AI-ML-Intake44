#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4]={{0}};
    int i;
    int j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enter the Array[%d][%d] element : ", i,j);
            scanf("%d",&arr[i][j]);

        }
        printf("\n");
       // printf("%d\t", arr[i][j]);
    }
    printf("The Array is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Sum of Each Row
    int sum[3]={0};

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            sum[i] = sum[i] + arr[i][j];

            }
    printf("\nSum of all the elements in row %d is %d\n",i,sum[i]);
    }

    // Average for each column
    int sumC=0;
    for(j=0;j<4;j++){
            sumC=0;
        for(i=0;i<3;i++){
             sumC = sumC + arr[i][j];
        }
        printf("\naverge of all the elements in Column %d is %d\n",j,sumC/3);
    }

    return 0;
}
