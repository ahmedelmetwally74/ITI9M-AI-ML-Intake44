#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <string.h>
#define null -32
void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int main()
{
    char name[3][10]={"New","Display","Exit"};
    int flag=0;
    int i;
    char ch;
    int cursor=0;
do{

    system("cls");
    for(i=0;i<3;i++){
        gotoxy(10,5+i);

        if(cursor==i){
        textattr(0x03);
        }
  printf("%s", name[i]);
        textattr(0x07);

    }
    ch=getch();
    switch(ch){
    case -32:
        ch=getch();

        switch(ch){
        // Up
        case 72:
            cursor--;
            if(cursor<0)
                cursor =3;
            break;
        // Down
        case 80:
            cursor++;
            if(cursor>3)
                cursor =0;
            break;
        }
        break;
        // Home
        case 71:
            cursor=0;
            break;
        // End
        case 79:
            cursor = 2;
            break;

    // Escape
    case 27:
        flag = 1;
       break;
    // Enter
    case 13:
        system("cls");
        printf("%s", name[cursor]);
        getch();
    // Exit
    if (cursor=2)
        flag = 1;
    break;
    }

}
while(flag == 0);
    return 0;
}
