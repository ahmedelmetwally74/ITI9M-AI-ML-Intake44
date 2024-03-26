#include <iostream>

using namespace std;
class Complex{
 int real;
 int img;

 public:
     Complex(){
     real=0;
     img=0;
     cout<<"parameterless cont \n";
     }
     Complex (Complex const& c){ // copy contll
      real=c.real;
      img=c.img;
       cout<<" copy cotr  \n";
     }
     Complex(int _real){
     real=_real;
     img=0;
      cout<<" one parameter cont \n";
     }

     Complex(int _real , int _img){
     real=_real;
     img=_img;
     cout<<" two parameter cont \n";
     }

     int setReal (int _real){
      real=_real;
     }
     int setImg (int _img){
      img=_img;
     }

     int getReal (){
      return real;
     }

     int getImg (){
      return img;
     }

     void print (){

     if (img>0)
        {
        cout<<real << "+"<<img <<"j"<<endl;
        }
     else if (img<0)
        {
         cout<<real <<img <<"j"<<endl;
        }else{
         cout<<real<<endl;
        }

     }

     Complex add (Complex c){
      Complex res;
      res.real=real+c.real;
      res.img=img+c.img;
      return res;

     }


};
 Complex add (Complex &c , Complex &c2);

int main()
{
    Complex c1(50,40) ,c2(50,30) ,c3 ,c7;
    c1.print();
    c2.print();
    c3.print();
    Complex c5=c1.add(c2);
    cout<<"sum of numbers is :"<<endl;
    c5.print();
    c7 = add(c1,c2);
    cout<<"sum of numbers is :"<<endl;
    c7.print();

    return 0;
}

 Complex add (Complex &c , Complex &c2){

 Complex result;
 result.setReal( c.getReal()+ c2.getReal());
 result.setImg( c.getImg()+ c2.getImg());

 return result;
}
