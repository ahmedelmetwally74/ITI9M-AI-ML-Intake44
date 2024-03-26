#include <iostream>
#include<string.h>
using namespace std;

class emp
{
    int id;
    char name[10];
    int salary;
public:
    //Constractors
    emp()
    {
        id=1;
        strcpy(name,"No name yet");
        salary=0;
        cout<<"Parameter less Constractor\n";
    }
    emp(int _id,char* _name,int _salary)
    {
        id=_id;
        strcpy(name,_name);
        salary=_salary;
        cout<<"Three Parameters Constractor\n";
    }
    emp(int _id,char* _name)
    {
        id=_id;
        strcpy(name,_name);
        salary=2500;
        cout<<"Two Parameters Constractor\n";
    }
    emp(char* _name,int _salary)
    {
        id=1;
        strcpy(name,_name);
        salary=_salary;
        cout<<"Two Parameters Constractor\n";
    }
    emp(int _id,int _salary)
    {
        id = _id;
        strcpy(name,"No name yet");
        salary=_salary;
        cout<<"Two Parameters Constractor\n";
    }
    // Setters
    void setId(int _id)
    {
        id =_id;
    }
    void setName(char* _name)
    {
        strcpy(name,_name);
    }
    void setSalary(int _salary)
    {
        salary=_salary;
    }
    // Getters
    int getId()
    {
        return id;
    }
    char* getName()
    {
        return name;
    }
    int getSalary()
    {
        return salary;
    }
    // print Function
    void print()
    {
        cout<<"The Employee Details:-"<<endl;
        cout<<"His ID is: "<<id<<endl;
        cout<<"His Name is: "<<name<<endl;
        cout<<"His Salary now is: "<<salary<<endl;
    }
    // Deconstractor
    ~emp()
    {
        cout<<"Deconstractor says Hi";
    }
};

int main()
{
    emp e1(25,"Ahmed",4500);
    e1.print();

    cout<<"Another Employee\n";
    emp e2("Mahmoud",5000);
    e2.print();

    cout<<"Another Employee\n";
    emp e3;
    e3.print();



    return 0;
}
