#include <iostream>
#include<string.h>
using namespace std;
class Person {
    protected:
    int id;
    char name[10];
    int age;

public:
    // Constractor
    Person(){
    id=0;
    strcpy(name,"No Name");
    age=0;
    }
    Person(int  _id,char * name){
        age=6;
    }
    Person(int _id,char* _name,int _age){
        id =_id;
        strcpy(name,_name);
        age=_age;
    }
    // Setters
    void setID(int _id){id=_id;}
    void setName (char* _name){strcpy(name,_name);}
    void setAge(int _age){age=_age;}
    // Getters
    int getID(){return id;}
    char* getName(){return name;}
    int getAge(){return age;}
    // Print
    void print(){
    cout<<"\nPerson==> "<<id<<":"<<name<<":"<<age;
    }
};

class Student :public Person{
    char grade;
public:
    void setAge(int _age){
        if(_age>6)
            age=_age;
        else
            cout<<"Invalid Age for the Student";
    }
    Student(){
        grade='F';
    }
    Student(int _id,char* _name):Person(_id,_name){
        grade='F';
    }
    Student(int _id,char* _name,int _age):Person(_id,_name,_age){
        grade='F';
    }
    Student(int _id,char* _name,int _age,char _grade):Person(_id,_name,_age){
        grade=_grade;
    }

    void setGrade(char _grade){grade=_grade;}
    char getGrade(){return grade;}

    void print(){
        cout<<"\nThe Information about Student is";
        // scope operator to can print from the parent class
        Person::print();
        // if I just enter "print();" that's called recursion and stack overflow
        //cout<<"\nPerson==>"<<id<<":"<<Name<<":"<<Age<<":"<<Grade;
        cout<<":"<<getGrade();
    }
};

class Instractor :public Person{
    int Salary;
public:
    // Make the constrain to set condition to instractor
    void setAge(int _age)
    {
        if(_age>=30){
            age=_age;
        }else
        cout<<"Invalid age for the Instractor";
    }
    Instractor(int _id, char* _name, int _age):Person(_id,_name,_age)
    // Make constractor here to not return to the default constractor in Person
    // and set a initial value for instractor's Salary
    {
        Salary=5000;
    }
    void setSalary(int _salary){Salary=_salary;}
    int getSalary(){return Salary;}

    void print(){
        cout<<"\nThe Information about Instractor is";
        Person::print();
        cout<<":"<<Salary;
    }
};
int main()
{
    Person p1;
    Person(30,"Ahmed",25);
    p1.print();
    Student s1;
    s1.setAge(23);
    s1.setName("Mohamed");
    s1.setID(31);
    s1.setGrade('A');
    s1.print();
    Student s2;

    Instractor i1(40,"Mahmoud",45);
    i1.setAge(20);
//    i1.setID(40);
//    i1.setAge(45);
//    i1.setName("Mahmoud");
    i1.print();
    return 0;
}
