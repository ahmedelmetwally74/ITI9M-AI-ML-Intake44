#include <iostream>
#include<string.h>

using namespace std;
class Person
{
protected:
    int id;
    char name [20];
    int age;
public:
    Person()
    {
        id=10;
        strcpy(name,"NO NAME");
        age=6;
    }
    Person(int idd,  char* nname, int aage)
    {
        id=idd;
        age=aage;
        strcpy(name,nname);
    }


    void setID (int idd)
    {
        id=idd;
    }
    void setAGE (int aage)
    {
        age=aage;
    }
    void setNAME (char* nname)
    {
        strcpy(name,nname);
    }
    int getID()
    {
        return id;
    }
    char* getNAME()
    {
        return name;
    }
    int getAGE()
    {
        return age;
    }
    void print()
    {
        cout<<"\nPerson:"<<id<<":"<<name<<":"<<age;
    }


};

class Student: public Person
{
    char grade;
public:
    void setGRADE (char ggrade)
    {
        grade=ggrade;
    }
    char getGRADE()
    {
        return grade;
    }
    void print()
    {
        Person::print();
        cout<<"\nThe Grade is:"<<grade;
    }
};
class Instructor : public Person
{
    int salary;
public:
    Instructor(int idd,  char* nname, int aage)
    {
        id=idd;
        age=aage;
        strcpy(name,nname);
        salary=5000;
    }
    void setSALARY(int ssalary)
    {
        salary=ssalary;
    }
    int getSALARY()
    {
        return salary;
    }
    void print()
    {
        cout<<"\n******************************";
        cout<<"\nThe Data of the Instractour:";
        Person::print();
        cout<<"\nThe Salary is: "<<salary;
    }
};
int main()
{

    Person p1;
    Student s1;
    s1.setGRADE('A');
    s1.setNAME("ahmed");
    s1.setID(1);
    s1.setAGE(15);
    s1.print();
    s1.Person::print();
    Instructor is1(28,"Mohamed",30);
    is1.print();
    is1.Person::print();
    return 0;
}
