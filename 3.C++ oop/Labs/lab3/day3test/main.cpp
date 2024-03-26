#include <iostream>

using namespace std;
class Stack
{
  // Define the Attributes
  int* arr; // Declare Dynamic Array
  int size;
  int tos;
public:
   // Make a Constractor to set the initial values
   Stack()
   {
        tos=0;
        size=3;
        arr=new int[size]; // coz of Dynamic Array
   }
   // Make a new Constractor to receive size
   // Create an object from stack by default constractor
   Stack(int size)
   {
        tos=0;
        size=3;
        arr=new int[size]; // coz of Dynamic Array
   }
   /*Make a deconstructor:special member function of a class
   that is used to clean up any resources that
   the object may have acquired during its lifetime*/
   ~Stack()
   {
       delete[] arr;
   }
   // Make Functions like push, pop, IsEmpty, IsFull
   // push function: if i can add return 1, else return 0
   int push(int d)
   {
        if(isFull()==1){
            cout<<"Stack is full\n";
            return 0;

       }
       else {
        arr[tos]=d;
        tos++;
        return 1;
       }
   }
   // Pop function: see if it can make pop
   // Make pointers to return the data
   int pop(int& d)
   {
       if(isEmpty()==1){
        cout<<"\nStack is Empty";
        return 0;
       }

       else
        {
            tos--;
            d=arr[tos];
            arr[tos]=-1;
            return 1;
        }

   }

   int isFull()
   {
        if(tos==size)
            return 1;
        else
            return 0;
   }
   int isEmpty()
   {
       if(tos==0)
            return 1;
       else
            return 0;
   }
};
int main()
{
    Stack s2(3);
   s2.push(10);
   s2.push(20);
   s2.push(30);
   s2.push(40);
   s2.push(30);
   s2.push(40);
    return 0;
}
