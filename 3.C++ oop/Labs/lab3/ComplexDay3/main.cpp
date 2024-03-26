#include <iostream>
#include <string.h>
using namespace std;
class Complex {
    int real ;
    int img;
    public:
       Complex ()
       {
           real=0;
           img=0;
       }

       Complex (int _real ,int _img)
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
    Complex add(Complex c )
    {
        Complex res;
        res.real=c.real+real;
        res.img=c.img+img;
        return res;

    }
    Complex operator+ (Complex  const & c )
    {

        Complex res;
        res.real=c.real+real;
        res.img=c.img+img;
        return res;
    }
     Complex operator+ (int r )
    {

        Complex res(real+r,img);

        return res;
    }
};
    Complex operator+(int r,Complex & c)
    {

        Complex res;
        res.setReal (r+c.getReal());
        res.setImg(c.getImg());
        return res;
    }

    Complex  add (Complex c1, Complex c2 );
int main()
{
   Complex c1,c3;
   Complex c2;
   c1.setReal(5);
   c1.setImg(6);
   c2.setReal(3);
   c2.setImg(8);
   c1.print();
   c2.print();
   c3=c1.operator+(c2);
   c3.print();
   c3=c1+5;
   c3.print();
   c3=10+c1;
   c3.print();

    return 0;
}
 Complex add (Complex c1, Complex c2 )
 {
     Complex res;
     res.setReal(c1.getReal()+c2.getReal());
     res.setImg(c1.getImg()+c2.getImg());
     return res;
 }
