#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#define MENU_SIZE 7
#define DB_SIZE 100

//Main Variables
int flag = 0;
int mainCursor = 0;
char ch;

//Data Base Creation
//Data Structure
struct emp
{
    int id;
    char name[10];
    int salary;
};
//DB Object Object
struct emp employee[DB_SIZE];
// Function to initialize an emp structure Definition
void zeroinitializeEmp(struct emp *employee)
{
    employee->id = -1;
    strcpy(employee->name, "");
    employee->salary = 0;
}
//End Data Base Creation


char* menu[MENU_SIZE] =
{
    "New",
    "Display",
    "Search by ID",
    "Search by name",
    "Delete by ID",
    "Delete by name",
    "Exit"
};


void initializeEmp(struct emp *employee)
{
    int newID;
    while (1)
    {
        printf("Enter ID: ");
        scanf("%d", &newID);

        if (newID < 0 || newID >= 100)
        {
            printf("Invalid ID. The ID must be between 0 and 99.\n");
            continue; // request for ID again
        }

        if (searchEmployeeById(employee, newID))
        {
            printf("Employee with ID %d already exists. Please choose a different ID.\n", newID);
        }
        else
        {
            employee[newID].id = newID;

            printf("Enter Name: ");
            scanf("%s", employee[newID].name);

            printf("Enter Salary: ");
            scanf("%d", &employee[newID].salary);
            break;
        }
    }
}

void displayEmployee(struct emp *employee)
{
    if (employee->id != -1)
    {
        printf("ID: %d\n", employee->id);
        printf("Name: %s\n", employee->name);
        printf("Salary: %d\n", employee->salary);
        printf("\n");
    }
}

void searchEmployeeByName(struct emp *employees, const char *name)
{
    int i;
    for ( i = 0; i<100; i++)
    {
        if (strcmp(employees[i].name, name) == 0 && employees[i].id != -1)
        {
            displayEmployee(&employees[i]);
            return;
        }

    }
    printf("Employee %s not found \n", name);

}

int searchEmployeeById(struct emp *employees, int id)
{
    int i;
    for ( i = 0; i < 100; i++)
    {
        if (employees[i].id == id)
        {
            displayEmployee(&employees[i]);
            return 1; // Employee found, exit the loop
        }
    }
    return 0; // Employee not found,

}


void deleteEmployeebyId(struct emp *employees, int id)
{
    if (searchEmployeeById(employees, id))
    {
        zeroinitializeEmp(&employees[id]);
        printf("Employee with ID %d has been successfully deleted.\n", id);
    }
    else
    {
        printf("Employee with ID %d was not found and could not be deleted.\n", id);
    }
}


void deleteEmployeebyName(struct emp *employee, const char *name)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        if (strcmp(employee[i].name, name) == 0)
        {
            // Set the ID to -1 to "delete" the employee
            employee[i].id = -1;
            printf("Employee with name %s has been successfully deleted.\n",name);
        }
    }
    printf("Employee with Name %s not found and can't be deleted it.\n",name);

}



void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void displayMenu(const char* menu[], int size, int padding, int cursor)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        if (i == cursor)
        {
            textattr(0x70);
        }
        else
        {
            textattr(0x07);
        }
        gotoxy(padding, i);
        printf("%s", menu[i]);
    }
}

void runMenu()
{
    do
    {
        displayMenu(menu, MENU_SIZE, 0, mainCursor);

        ch = getche();

        switch (ch)
        {
        case -32:
            ch = getche();
            switch (ch)
            {
            case 72: // up
                mainCursor--;
                if(mainCursor==-1)
                    mainCursor=6;
                break;
            case 80: // down
                mainCursor++;
                if(mainCursor>6)
                    mainCursor=0;
                break;
            case 71: // Home
                mainCursor = 0;
                break;
            case 79: // End
                mainCursor=6;
                break;
            default:
                mainCursor = 1;
                break;
            }
            break;
        case 27: // Exit
            flag = 1;
            break;
        case 13: // Enter
            if (mainCursor == MENU_SIZE - 1)
            {
                flag = 1;
            }
            else
            {
                // Perform an action based on the selected menu item (mainCursor)
                switch (mainCursor)
                {
                case 0: // New
                    system("cls");
                    initializeEmp(&employee);
                    getche();
                    system("cls");
                    break;
                case 1: // Display
                    system("cls");
                    int i;
                    for ( i = 0; i < 100; i++)
                    {

                        displayEmployee(&employee[i]);
                    }
                    getche();
                    system("cls");

                    break;
                    int searchId;
                case 2: // Search by ID

                    system("cls");
                    printf("Enter ID to search: ");
                    scanf("%d", &searchId);
                    if(!searchEmployeeById(&employee, searchId))
                    {
                        printf("Error 404! Not found!\n");
                    }

                    getche();
                    system("cls");
                    break;
                case 3: // Search by name
                    system("cls");
                    char searchName[10];
                    printf("Enter name to search: ");
                    scanf("%9s", searchName);
                    system("cls");
                    searchEmployeeByName(&employee, searchName);
                    getche();
                    system("cls");
                    break;
                case 4: // Delete by ID
                    system("cls");
                    int deleteId;
                    printf("Enter ID to delete: ");
                    scanf("%d", &deleteId);
                    deleteEmployeebyId(&employee,deleteId);
                    getche();
                    system("cls");
                    break;
                case 5: // Delete by name
                    system("cls");
                    char deleteName[10];
                    printf("Enter name to delete: ");
                    scanf("%9s", deleteName);
                    deleteEmployeebyName(&employee, deleteName);
                    getche();
                    system("cls");
                    break;
                default:
                    break;
                }
            }
            break;
        default:
            break;
        }
    }
    while (flag == 0);
}

int main()
{
    system("cls");
    int i;
    for ( i= 0; i < 100; i++)
    {
        zeroinitializeEmp(&employee[i]);
    }
    runMenu();
    textattr(0x07);
    return 0;
}
