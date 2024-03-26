#include <iostream>
#include <graphics.h>
using namespace std;
// **********************************
// This Class for Point
class Point
{
    int x;
    int y;
public:
    void setX(int _x)
    {
        x=_x;
    }
    void setY(int _y)
    {
        y=_y;
    }
    void setPoint(int _x,int _y)
    {
       x=_x;
       y=_y;
    }

    int getX()
    {
    return x;
    }
    int getY()
    {
        return y;
    }
    void print()
    {
       cout<<"("<<x<<","<<y<<")";
    }

    //ctor
    Point()
    {
        x=y=0;
    }
    //Second ctor to take 1 integer
    Point(int xy)
    {
        x=y=xy;
    }
    //Third ctor to take 2 integer
    Point(int _x, int _y)
    {
        x=_x;
        y=_y;
    }
    /* I can Dispense these constractor
     and depend on Default constractor
     but we will leave it to trace*/
};
// **********************************
// This Class for Rectangle Shape
class Rect
{
    /* Now we want to enter the 2 Points
    to can draw the rectangle
    we assume the 2 points Upper Left
    and Lower Right*/
    Point UL;
    Point LR;
public:

    /* when Create object from Rectangle"the Building"
    the room should be created and thet's mean
    the points should be created first*/
} ;
int main()
{
    Rect r1;
    Point p1(5),p2(10,20);
    p1.print();
    p2.print();

    return 0;
}
