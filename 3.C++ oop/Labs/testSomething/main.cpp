#include <iostream>
#include<string.h>
using namespace std;

class Complex
{
    int real;
    int img;

public:

    // Constractors
    Complex()
    {
        real =0;
        img =0;
        cout<<"Default Constractor\n";
    }
    // Copy Constractor
    Complex(Complex const &c)
    {
        real = c.real;
        img = c.img;
        cout<<"Copy Constractor\n";
    }
    Complex(int _real,int _img)
    {
        real=_real;
        img =_img;
        cout<<"Two parameters Constractor\n";
    }
    Complex(int _RI)
    {
        real =img =_RI;
    cout<<"One Parameter Constractor\n";
    }
    void setReal(int _real)
    {
        real=_real;
    }
    void setImg(int _img)
    {
        img =_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void print()
    {
        if (getImg()>0)
            cout<<"Complex Number is: "<<real<<"+"<<img<<"j"<<endl;
        else if (getImg()<0)
            cout<<"Complex Number is: "<<real<<img<<"j"<<endl;
        else
            cout<<"Complex Number is: "<<real<<endl;
    }
    // standing Alone Function
    // use C & caller Object
    Complex addMemberFunction(Complex c)
    {
        // You are inside the class, you should make new variable to put the result in
        Complex res; // trace will go to default constractor from here
        res.real=c.real + real;
        res.img= c.img + img;
        return res;
    }
    ~Complex()
    {
        cout<<"Destructor\n";
    }


};

Complex addStandingAloneFunction(Complex c4, Complex c5)
{
    // Alone function : one part
    Complex res;
    res.setReal(c4.getReal()+c5.getReal());
    res.setImg(c4.getImg()+c5.getImg());
    return res;
}
int main()
{
//    Complex c1;
//    c1.setReal(30);
//    c1.setImg(50);
//    c1.print();
//    Complex c2;
//    c2.setReal(50);
//    c2.setImg(-90);
//    c2.print();
//    Complex c3;
//    c3.setReal(20);
//    c3.setImg(0);
//    c3.print();
//    Complex c4;
//    c4.setReal(60);
//    c4.setImg(90);
    Complex c5;
    c5.setReal(30);
    c5.setImg(40);
    Complex c1(50,40) ,c2(50,30) ,c3, c99,c4;
    // Try the Member Function
    Complex c6= c5.addMemberFunction(c4);// Didn't destruct for result
    c6.print();
    // Try the Standing Alone Function
    c6 = addStandingAloneFunction(c4,c5); // destruct for result
    c6.print();
    // Test Constractors

    return 0;
}
