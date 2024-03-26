#include <iostream>
#include<string.h>
using namespace std;
class Shape
{
protected:
    int dim1,dim2;
    // Setters
public:
    // Default Constractor
    Shape(){dim1=dim2=1;}
    // Second Constractor if the user enter one value not two
    Shape(int dim){
        dim1=dim2=dim;
        }
    // Third Constractor to enter two values directly
    Shape(int _dim1,int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
    void setDim1(int _dim1){dim1=_dim1;}
    void setDim2(int _dim2){dim2=_dim2;}
    // Getters
    int getDim1(){return dim1;}
    int getDim2(){return dim2;}

    void print()
    {
        cout<<"("<<dim1<<","<<dim2<<")";
    }
};

class Rect:public Shape
{
public:
    // Default Constractor
    Rect(){}
    // Second Constracto to enter two values
    Rect(int _dim1,int _dim2 ):Shape(_dim1,_dim2)// Chane
    {
    }
    float calcArea(){
        return dim1*dim2;
    }
};

class Triang:public Shape
{
public:
    // Default Constractor
    Triang(){}
    // Second Constracto to enter two values
    Triang(int _dim1,int _dim2 ):Shape(_dim1,_dim2)// Chane
    {
    }
    float calcArea(){
        return .5*dim1*dim2;
    }
    void printDimensions(){
        cout<<"("<<dim1<<","<<dim2<<")\n";
    }
};

class Circle:public Shape
{
public:
    // To make sure if two values are equal
    void setDim1(int _dim){
        dim1=dim2=_dim;
    }
    void setDim2(int _dim){
        dim2=dim1=_dim;
    }

    // Default Constractor
    Circle(){}
    // Second Instractor
    Circle(int _dim1):Shape(_dim1)// chane
    {

    }
    float calcArea(){
        return 3.14*dim1*dim2;
    }
};
// Standalone function to print
void printRectArea(Rect r){
    cout<<r.calcArea();
}
// when we use printShapeArea instead of
// printTraingArea and printRectArea
// that's Overload
// when I call printShapeArea for all used shapes
void printTriangArea(Triang t){
    cout<<t.calcArea();
}
void printCircleArea(Circle c){
    cout<<c.calcArea();
}
// I can use one StandAlone Function to all of them
void printShapeArea(Shape r){
    r.print();
}
int main()
{
    Rect r1(10,2);
    cout<<"The Area of Rectangle\n";
    printShapeArea(r1);
    Triang t1(10,2);
    cout<<"\nThe Area of Traiangle\n";
    //t1.printDimensions();
    printShapeArea(t1);
    Circle c1(5);
    cout<<"\nThe Area of Circle\n";
    printShapeArea(c1);

    return 0;
}
