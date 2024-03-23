#include <stdio.h>
#include <stdlib.h>
struct emp {
    int id;
    char name[10];
    int salary;
};
int main()
{
    struct emp e1={10,"ahmed",2500};
    struct emp *ptr=&e1; // Here my pointer point to e1


    printf("%d:%s:%d",ptr->id,ptr->name,ptr->salary);

    return 0;
}
