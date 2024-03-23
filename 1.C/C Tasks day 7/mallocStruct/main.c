#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[10];
    int salary;
};
int main()
{
    int size ;
    int i;
    printf("Enter Array Size:");
    scanf("%d",&size);

    struct emp* arr=malloc(size*sizeof(struct emp));
    for (i=0; i<size; i++)
    {
        printf("Enter Employee %d ID:",i+1);
        scanf("%d",&arr[i].id);
        printf("Enter Employee %d name:",i+1);
        scanf("%s",arr[i].name);
        printf("Enter Employee %d Salary:",i+1);
        scanf("%d",&arr[i].salary);
    }
    for (i = 0; i < size; i++)
        printf("\nEmployee ID: %d \nEmployee Name: %s \nEmployee Salary: %d \n",arr[i].id,arr[i].name,arr[i].salary);
    return 0;
}
