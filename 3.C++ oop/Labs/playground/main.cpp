#include <iostream>
#include<string.h>

using namespace std;
class Car{
    int id;
    int price;
    char name[10];
    int model;

public:
    void setId(int _id)
    {
        id =_id;
    }
    void setPrice(int _price)
    {
        price = _price ;
    }
    void setName(char* _name) // when calling should put *
    {
        strcpy(name,_name);
    }
    void setModel(int _model)
    {
        model=_model;
    }
    int getId(){
        return id;
    }
    int getPrice()
    {
        return price;
    }
    char* getName() // when calling should put *
    {
        return name;
    }
    int getModel()
    {
        return model;
    }
void print()
    {
        cout<<"The Name of the car is: "<<name<<endl;
        cout<<"The Model of "<<model<<endl;
        cout<<"Its Price is "<<price<<endl;
        cout<<"Its ID is "<<id<<endl;
    }
};


void printId(Car c1);
int main()
{

    Car c1;
    c1.setId(26);
    c1.setName("KIA");
    c1.setModel(2016);
    c1.setPrice(900000);
    c1.print();
    printId(c1); // when using standAlone Function ==> pass object not value
    return 0;
}

void printId(Car c1){
     cout<<"the Id of the car: "<<c1.getId();

}


