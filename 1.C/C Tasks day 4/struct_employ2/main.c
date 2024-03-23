#include <stdio.h>
#include <stdlib.h>

struct emp {
    char name[10];
    int id;
    int age;
    int salary;
    int overtime;
    int deduction;

};
int main()
{
    struct emp arr[20];

    int i;
    for(i=0;i<5;i++){

        printf("Enter the ID of Employee no. %d : ", i+1);
        scanf("%d",&arr[i].id);

        do{
            printf("/nWrong ID, Enter ID Again!");
            scanf("%d",&arr[i].id);
        }while(arr[i+1].id == arr[i].id)

        printf("\nEnter the Name of Employee no. %d : ", i+1);
        scanf("%s",arr[i].name);

        printf("\nEnter the Age of Employee no. %d : ", i+1);
        scanf("%d",&arr[i].age);

        printf("\nEnter the Main Salary of Employee no. %d : ", i+1);
        scanf("%d",&arr[i].salary);

        printf("\nEnter the Overtime of Employee no. %d : ", i+1);
        scanf("%d",&arr[i].age);

        printf("\nEnter the Deduction of Employee no. %d : ", i+1);
        scanf("%d",&arr[i].age);

        printf("\n*************************************\n");

    }

    // For Print

    int total_sal;
    for(i=0;i<5;i++){
        printf("The Employ no. %d",i+1);
        printf("\nThe ID of Employ no. %d",arr[i].id);
        printf("\nThe Name of Employ no. %s",arr[i].name);
        printf("\nThe Age of Employ no. %d",arr[i].age);
        printf("\nThe Total Salary of Employ no. %d",arr[i].salary + arr[i].overtime - arr[i].deduction);


    }


    return 0;
}
