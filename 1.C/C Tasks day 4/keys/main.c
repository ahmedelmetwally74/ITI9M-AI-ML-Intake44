#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch = getchar();
    if(ch == -32){
        printf("Extended key");
        ch= getch();
        printf("%c", ch);
    } else
    printf("Normal Key %c :%d", ch, ch);
    return 0;
}
