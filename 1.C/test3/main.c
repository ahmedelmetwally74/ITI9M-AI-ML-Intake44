#include <stdio.h>
#include <stdlib.h>
int add(int a,int b);

int main()
{
    // Here you should make a variable to store the result
    int result = add(20,15);
    printf("%d",result);

    return 0;
}
/*Make add Function but return the output*/
int add(int a,int b)
{
    int z;
    z=a+b;
    return z;
}
