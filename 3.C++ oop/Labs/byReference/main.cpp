#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int &h=x;
    cout<<h<<":"<<x<<endl; // Print By reference : By value
    cout<<&h<<":"<<&x<<endl; // print the address : Same Address to the same value
    int *ptrx=&x;
    cout<<*ptrx<<endl; // Print by Address
    cout<<ptrx; // Print the address of the value of the pointer or the address of the value
    return 0;
}
