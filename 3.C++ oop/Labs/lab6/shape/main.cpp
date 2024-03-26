#include <iostream>

using namespace std;

class Shape
{
protected:
    int dim1;
    int dim2;

public:

    Shape()
    {
        dim1=dim2=1;
    }

    Shape(int dim)
    {
        dim1=dim2=dim;
    }
    Shape(int _dim1, int _dim2)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
    void setDiml(int _dim1)
    {
        dim1=_dim1;
    }
    void setDim2(int dim2)
    {
        dim2= dim2;
    }
    int getDiml ()
    {
        return dim1;
    }
    int getDim2 ()
    {
        return dim2;
    }
};

class Rect: public Shape
{
public:
    Rect() {}
    Rect(int _dim1,int _dim2):Shape(_dim1,_dim2)
    {}

    float calcArea()
    {
        return dim1*dim2;
    }
    void print()
    {
        cout << " (" << dim1 << "," << dim2 << ")";
    }
};

class Square: public Shape
{
public:
    Square() {}
    Square(int _dim1,int _dim2):Shape(_dim1,_dim2)
    {}

    float calcArea()
    {
        return dim1*dim2;
    }
    void print()
    {
        cout << " (" << dim1 << "," << dim2 << ")";
    }
};

class Triang: public Shape
{
public:
    Triang() {}
    Triang(int _dim1,int _dim2):Shape(_dim1,_dim2)
    {}
    float calcArea()
    {
        return 0.5*dim1*dim2;
    }
};
// protected shape : the public will be protected in the main :Inhertance mode
class Circle: public Shape
{
public:
    void setDim1(int dim)
    {
        dim1=dim;
        dim2=dim;
    }
    void setDim2(int dim)
    {
        dim1=dim2=dim;
    }
    float calcArea()
    {
        return 3.14*dim1*dim2;
    }
};
int main()
{
    Shape s;
    //create object for rectangle
    Rect r1(10,20);
    Triang t1(10,20);
    Square s1(15,15);
    //Circle c1(7);
    cout << r1.calcArea()<< endl;
    cout << t1.calcArea() << endl;
    cout << s1.calcArea() << endl;
}
