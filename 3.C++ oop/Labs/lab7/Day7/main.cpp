#include <iostream>
#include<string.h>
using namespace std;

class Parent {
    int x;
    int y;
public:
    Parent(){
    x=0;
    y=0;
    }
    Parent(int _x,int _y){
    x=_x;
    y=_y;
    }
    void setX(int _x){x=_x;}
    void setY(int _y){y=_y;}

    int getX(){return x;}
    int getY(){return y;}

    void print(){
    cout<<x<<":"<<y;
    }
};

class child:public Parent{
    int z;
public:
    child(int _x=0,int _y=0,int _z=0):Parent(_x,_y){
        z=_z;
    }
    void setZ(int _z){z=_z;}

    int getZ(){
    return z;
    }
};

int main()
{
    child p1(10,20,30);
    p1.print();
    return 0;
}
