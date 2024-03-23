#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char ch;
    do{
    system('cls');
    printf("New \nDisplay \nExit");
    ch= getchar();
    switch(ch) {

case'n':
case'N':
    printf("\nNew Selected");
    break;
case'd':
case'D':
    printf("\nDisplay Selected");
    break;
case'e':
    printf("\nExit Selected");
    break;
    }
    }while(ch =!'e');
    return 0;
}
