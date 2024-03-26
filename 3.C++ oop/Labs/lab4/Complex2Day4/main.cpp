#include <iostream>
#include <string.h>
using namespace std;
class Complex
{
    int real ;
    int img;
public:
    Complex ()
    {
        real=0;
        img=0;
    }

    Complex (int _real,int _img)
    {
        real=_real;
        img=_img;
    }

    void setReal (int _real)
    {
        real=_real;
    }

    int getReal ()
    {
        return real;
    }

    void setImg(int _img)
    {
        img=_img;
    }

    int getImg()
    {
        return img;
    }


    void print()
    {
        if(img >0)
            cout<<real<<"+"<<img<<"j"<<endl;
        else if (img<0)
            cout<<real<<img<<"j"<<endl;
        else
            cout<<real<<endl;
    }
    int operator== (Complex r )
    {
        if(r.real ==   real && r.img== img  )
            return 1;
        return 0;

    }
    int operator!= (Complex r )
    {
        return (*this==r);

    }

    Complex &operator+= (Complex c)
    {
        real=real +c.real;
        img=img+c.img;
        return *this;
    }
    Complex& operator ++()
    {
        real++;
        return *this;
    }
    Complex& operator ++(int x)
    {
        real++;
        return *this;
    }
    explicit operator int()
    {
        return real;
    }







};

int main()
{

    Complex c1(3,8);
    Complex c2(5,6);
    Complex c3(4,6);

    c1.print();
    c2.print();
    c3.print();
    if( c1 ==c2)
        cout<<"  equals\n";
    else
        cout<<" not equal\n";
    if( c1 !=c2)
        cout<<"  not equals\n";
    else
        cout<<"  equal\n";
    c3+=c1;
    c3.print();
    ++c3;
    c3.print();
    c3=c1++;
    c3.print();
    int x= (int)c1;
    cout<<x<<endl;




    return 0;
}
