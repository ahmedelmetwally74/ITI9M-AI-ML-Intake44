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
    int i,s;
    printf("Enter the size: ");
    scanf("%d",&s);
    struct emp* ptr=(struct emp*)malloc(s*sizeof(struct emp));
    if(ptr != NULL)
    {
        for(i=0; i<s; i++)
        {
            printf("Enter the Id:");
            scanf("%d",&ptr[i].id);
            printf("\nEnter the name:");
            scanf("%s",ptr[i].name);
            printf("\nEnter the Salary:");
            scanf("%d",&ptr[i].salary);
        }
        for (i=0; i<s; i++)
        {
            printf("\nThe Information:%d:%s:%d",ptr[i].id,ptr[i].name,ptr[i].salary);
        }
        free(ptr);

    }
    else
        return 2;
    return 0;
}
