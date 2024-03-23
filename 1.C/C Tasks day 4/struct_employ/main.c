#include <stdio.h>
#include <stdlib.h>
struct emp{
    char name[10];
    int id;
    int age;
    int salary;
    int overtime;
    int deduction;

};
int main()
{

    struct emp e1;

    printf("Enter the Name of the employee : ");
    scanf("%s",e1.name);

    printf("\nEnter the id of the employee : ");
    scanf("%d",&e1.id);

    printf("\nEnter the age of the employee : ");
    scanf("%d",&e1.age);

    printf("\nEnter the Main Salary of the employee : ");
    scanf("%d",&e1.salary);

    printf("\nEnter the Overtime work of the employee : ");
    scanf("%d",&e1.overtime);

    printf("\nEnter the Deduction of the employee : ");
    scanf("%d",&e1.deduction);


    int total_sal;
    total_sal = e1.salary + e1.overtime - e1.deduction ;


    printf("\n");
    printf("Name: %s\n",e1.name );
    printf("ID: %d\n",e1.id);
    printf("Age: %d\n",e1.age);
    printf("Total Salary: %d\n",total_sal);

    return 0;
}
