#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
void gotoxy(int x,int y)
{
COORD coord={0,0};
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int x_col,y_row,size,num;
    size=3;
    num=1;
   // Initialize the magic box array
   if (num==1)
   x_col = (size+1)/2;
   y_row=1;
     gotoxy(x_col,y_row);
     printf("%d",num);

    for (num=2;num<=size*size;num++){
            // Undevidable
        if ((num-1)%size){
                if (x_col==1){
            x_col=size+1 ;// 1 -1 =0
        }
        if (y_row==1){
            y_row=size+1 ;// 1 -1 =0
        }
            x_col-=1;
            y_row-=1;

            gotoxy(x_col,y_row);
            printf("%d",num);
        } else {
            if (y_row==size){
            y_row=0;
        }
            y_row+=1 ;
            gotoxy(x_col,y_row);
            printf("%d",num);
        }



    }






   //
}
