#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp{
    int id;
    char name[10];
    int salary;
};
int main()
{
   struct emp arr[3]={{0}};
   int i;
   for(i=0;i<3;i++){
    printf("Enter the id: ");
    scanf("%d",&arr[i].id);
    printf("Enter the name: ");
    scanf("%s",arr[i].name);
    printf("Enter the salary: ");
    scanf("%d",&arr[i].salary);
   }
    printf("The data is \n");

   for(i=0;i<3;i++){
    printf("%d:%s:%d\n",arr[i].id,arr[i].name,arr[i].salary);
   }




    /*ar fname[15];
    char lname[15];
    char fullname[30];

    printf("Enter the first name: ");
    scanf("%s",fname);
    printf("\nEnter the Last name: ");
    scanf("%s",lname);
    strcpy(fullname,fname);
    strcat(fullname," ");
    strcat(fullname,lname);

    printf("\n%s", fullname);*/


    return 0;
}
