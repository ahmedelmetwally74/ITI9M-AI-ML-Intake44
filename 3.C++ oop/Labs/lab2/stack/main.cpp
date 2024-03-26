#include <iostream>

using namespace std;

class Stack
{
  // Define the Attributes
  int arr[5];
  int size;
  int tos;
public:
   // Make a Constractor to set the initial values
   Stack()
   {
        tos=0;
        size=5;
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
   int pop(int* d)
   {
       if(isEmpty()==1){
        cout<<"\nStack is Empty";
        return 0;
       }

       else{
        tos--;
        *d=arr[tos];
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
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    // make a variable x to can receive the data from pop
    int x;
    s1.pop(&x);
    cout<<x;
    s1.pop(&x);
    cout<<endl<<x;
    s1.pop(&x);
    cout<<endl<<x;
    if(s1.pop(&x)){
        cout<<endl<<x;
    }
    if(s1.pop(&x)){
        cout<<endl<<x;
    }
    if(s1.pop(&x)){
        cout<<endl<<x;
    }


    return 0;
}
