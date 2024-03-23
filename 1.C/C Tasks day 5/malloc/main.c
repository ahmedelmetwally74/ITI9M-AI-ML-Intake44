#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i;
    printf("Enter the size of the array:");
    scanf("%d",&s);
    int *arr = (int)malloc(s*sizeof(int));

    for(i=0;i<s;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
