#include <iostream>

using namespace std;

class Complex{
    int real;
    int img;

public:
    // to change the value and put the value in _real then put in real
    void setReal(int _real)
    {
        real=_real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    // To get my current Real Data
    int getReal()
    {
        return real;
    }
    // To get my current Img Data
    int getImg()
    {
        return img;
    }
    // to print the value I want in form Real+Img
    void print()
    {
        if(img>0)
            cout<<endl<<real<<"+"<<img<<"J";
        else if(img<0)
            cout<<endl<<real<<img<<"J";
        else
            cout<<endl<<real;

    }
};
// Create stand Alone Function
Complex add (Complex c1,Complex c2)
{
    // Define new variable called res to put the addion result in it
    Complex res;
    // I cant to reach the real value directly so I used getReal() first
    res.setReal(c1.getReal()+c2.getReal());
    // used getImg() first too
    res.setImg(c1.getImg()+c2.getImg());
    return res;
}
int main()
{
    Complex c1,c3;
    Complex c2;
    c1.setReal(2);
    c1.setImg(20);
    c2.setReal(3);
    c2.setImg(40);
    c3.setReal(4);
    c3.setImg(60);
    c3=add(c1,c2);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
