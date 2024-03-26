#include <iostream>
#include<string.h>
#define PI 3.14
using namespace std;

class Point
{
    int x;
    int y;
public:
    // Constructors
    Point()
    {
        x=y=0;
    }
    Point(int xy)
    {
        x=y=xy;
    }
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    // Setters
    void setX(int _x)
    {
        x=_x;
    }
    void setY (int _y)
    {
        y =_y;
    }
    void setPoint (int _x, int _y)
    {
        x=_x;
        y=_y;
    }
    // Getters
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
        cout<<"("<<x<<","<<y<<")\n";
    }
};

class Rect
{
    Point UL;
    Point LR;
public:
    Point getUL()
    {
        return UL;
    }
    Point getLR()
    {
        return LR;
    }
    void print()
    {
        cout<<"\nThe Upper Left Point: ";
        UL.print();
        cout<<"\nThe Lower Right Point: ";
        LR.print();
    }

};

int main()
{
    Point p1(6),p2(5,10);
    p1.print();
    p2.print();
    cout<<endl;
    Rect r1;
    r1.print();
    r1.getLR().print();

    return 0;
}
