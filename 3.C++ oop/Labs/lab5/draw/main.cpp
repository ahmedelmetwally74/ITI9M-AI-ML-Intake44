#include <iostream>
#include<graphics.h>

using namespace std;

class point
{
    int x;
    int y;
public:
    point()
    {
        x=y=0;
    }
    point(int _r)
    {
        x=y=_r;
    }
    point(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    void setX(int _x)
    {
        x=_x;
    }
    void setY(int _y)
    {
        y=_y;
    }
    void setpoint(int _x,int _y)
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
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    ~point()
    {
    }
};
class Rect
{
    point ul;
    point lr;
public:
    Rect():ul(0,0),lr(0,0)
    {
        cout<<"\nparameterless ctor";
    }
    Rect(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2)
    {
        cout<<"\n4parameter ctor";
    }

    void setul(point _ul)
    {
        ul=_ul;
    }
    void setlr(point _lr)
    {
        lr=_lr;
    }
    void setul(int x, int y)
    {
        ul.setpoint(x,y);
    }
    void setlr(int x, int y)
    {
        lr.setpoint(x,y);
    }
    void setRect(point _ul, point _lr)
    {
        ul=_ul;
        lr=_lr;
    }
    void setRect(int x1,int y1,int x2,int y2)
    {
        ul.setpoint(x1,y1);
        lr.setpoint(x2,y2);
    }
    point getul()
    {
        return ul;
    }
    point getlr()
    {
        return lr;
    }
    void print()
    {
        cout<<"\nUpper left point:";
        ul.print();
        cout<<"\nLower left point:";
        lr.print();
    }
    ~Rect()
    {
    }
    void draw()
    {
        rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
    }

};
class Circle
{
    point center;
    int rad;
public:
    Circle()
    {
        rad=1;
    }
    Circle(int x,int y,int _rad):center( x,y)
    {
        rad= _rad;
    }
    void setCenter(int _x,int _y)
    {
        center.setpoint(_x,_y);
    }
    void setCenter(point _center)
    {
        center= _center;
    }
    void setRad(int _rad)
    {
        rad = _rad;
    }

    void print()
    {
        center.print();
        cout<<"and rad = "<<rad;
    }
    void draw()
    {
        circle(center.getX(),center.getY(),rad);
    }

};

class Line
{
    point p1;
    point p2;
public:
    Line():p1(0,0),p2(0,0)
    {
        cout<<"\nparameterless ctor";
    }
    Line(int x1,int y1,int x2,int y2):p1(x1,y1),p2(x2,y2)
    {
        cout<<"\n4parameter ctor";
    }

    void setP1(point _p1)
    {
        p1=_p1;
    }
    void setP2(point _p2)
    {
        p2=_p2;
    }
    void setP1(int x, int y)
    {
        p1.setpoint(x,y);
    }
    void setP2(int x, int y)
    {
        p2.setpoint(x,y);
    }
    void setLine(point _p1, point _p2)
    {
        p1=_p1;
        p2=_p2;
    }
    void setLine(int x1,int y1,int x2,int y2)
    {
        p1.setpoint(x1,y1);
        p2.setpoint(x2,y2);
    }

    void print()
    {
        cout<<"\nfirst point:";
        p1.print();
        cout<<"\nsecond point:";
        p2.print();
    }

    void draw()
    {
        line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }

};




//void draw()
//{
//    Triangle(point1.getX(),point1.getY(),point2.getX(),point2.getY());
//}
//
//};

int main()
{
    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");


    Rect r1(200,100,400,500);
    // r1.print();
    r1.draw();
    //Rect r2(280,300,320,400);
    //r2.draw();


    Circle c1(300,200,50);
    c1.draw();
    Circle c2(300,350,50);
    c2.draw();

    Line l(100,550,500,550);
    //l.print();
    l.draw();

    Line l1(300,100,400,200);
    Line l2(400,200,200,200);
    Line l3(200,200,300,100);
    l1.draw();
    l2.draw();
    l3.draw();



    getch();
    closegraph();

    return 0;
}
