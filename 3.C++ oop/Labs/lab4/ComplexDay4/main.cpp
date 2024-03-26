#include <iostream>

using namespace std;
class Complex
{
    int real;
    int img;
public:
    // Constractor is worked once
    // set is worked more then time
    void setReal(int _real)
    {
        real=_real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    void setComplex(int _real,int _img)
    {
        real=_real;
        img=_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int _real,int _img)
    {
        real=_real;
        img=_img;
    }
    print()
    {
        cout<<"\n"<<real<<"+"<<img<<"j";
    }
    Complex operator+(Complex c)
    {
        Complex res(real+c.real,img+c.img);
        return res;
    }
    Complex operator+(int r)
    {
        Complex res(real+r,img);
        return res;
    }
    // Equal Operator
    int operator==(Complex c)
    {
        if(real== c.real && img == c.img)
            return 1;
        else
            return 0;
    }
    // != Operator
    int operator !=(Complex c)
    {
        return !(*this ==c);
    }
    int operator++() // prefix
    {
        real++;
    }
    Complex operator++(int) // postfix
    {
        Complex res(real,img);
        real++;
        return res;

    }
    // += Operator
    Complex operator +=(Complex c)
    {
        real=real +c.real;
        img =img+c.img;
    }


};
Complex operator+(int r,Complex c )
{
    return c+r;
}
int main()
{
    Complex c1(5,20);
    Complex c4;
    ++c1;
    c4=c1++;
    c4.print();
    c1+=c2;
    c1.print();
    Complex c2(10,20);
    if(c1!=c2)
        cout<<"\nNot Equal";
    else
        cout<<"\nEqual";
    Complex c3;
    c3=c1+c2;
    c3.print();

    return 0;
}
