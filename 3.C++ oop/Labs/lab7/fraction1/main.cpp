#include <iostream>
#include<algorithm>
using namespace std;

class Fraction
{
    int nom,dom;
public:
    // Constractor
    // Default Constractor
    Fraction()
    {
        nom=1;
        dom=1;
    }
    // Fraction to enter two values directly
    Fraction(int _nom=0,int _dom=1)
    {
        if(_dom==0)
        {
            cout<<"Error: division by zero is not allowed."<<endl;
            //exit(1);
        }
        else
        {
            nom =_nom;
            dom =_dom;
        }
    }
    // setters
    void setNom(int _nom)
    {
        nom=_nom;
    }
    void setDom(int _dom)
    {
        if (_dom == 0)
        {
            cout<<"Error: division by zero is not allowed."<<endl;
            // exit(1);
        }
        else
            dom = _dom;
    }
    // getters
    int getNom()
    {
        return nom;
    }
    int getDom()
    {
        return dom;
    }
    // print
//    float print(){
//        cout<<"The Fraction = "<<nom<<"/"<<dom<<"= "<<getNom()/getDom();
//    }
    // Operations
    Fraction add(Fraction const &f) const
    {
        int lcm = dom / __gcd(dom, f.dom) * f.dom;
        return Fraction(nom * (lcm / dom) + f.nom * (lcm / f.dom), lcm);
    }

    Fraction subtract(Fraction const &f) const
    {
        int lcm = dom / __gcd(dom, f.dom) * f.dom;
        return Fraction(nom * (lcm / dom) - f.nom * (lcm / f.dom), lcm);
    }

    void simplify()
    {
        int gcd = __gcd(nom, dom);
        nom /= gcd;
        dom /= gcd;
    }

    void print() const
    {
        cout <<nom<< "/" <<dom<<endl;
    }

};
int main()
{
    Fraction f1(1, 2), f2(3, 6);

    f1.print();
    f2.print();

    Fraction sum = f1.add(f2);
    sum.print();

    Fraction difference = f1.subtract(f2);
    difference.print();

    f1.simplify();
    f1.print();

    f2.simplify();
    f2.print();

    return 0;
}
