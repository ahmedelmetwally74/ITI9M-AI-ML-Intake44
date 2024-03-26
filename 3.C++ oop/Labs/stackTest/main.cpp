#include <iostream>
#include<string.h>
using namespace std;
class stack
{
    int arr[5];
    int tos;
    int Size;
public:
    // Constractors
    stack(){
        tos = 0;
        Size = 5;
    }
    int isFull()
    {
        if(tos == Size)
        {
            cout<<"The stack is full\n";
            return 1;
        }else
            return 0;
    }
    int isEmpty()
    {
        if(tos == 0)
        {
            cout<<"The stack is Empty\n";
            return 1;
        }else
            return 0;
    }

    int push(int d)
    {
        if(isFull()==1){
            return 0;
        }
        else
        {
            arr[tos]=d;
            tos ++;
            return 1;
        }
    }
    int pop(int *d)
    {
        if(isEmpty()== 1)
            return 0;
        else
        {
            tos --;
            arr[tos]= *d ;
            return 1;
        }

    }
};
int main()
{
    stack s1;
    // Test to push more than size
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    // Test to pop all valuse and more
    // pop function recieve the address not the value so we should create another variable
    int x;
    s1.pop(&x);
    s1.pop(&x);
    s1.pop(&x);
    s1.pop(&x);
    s1.pop(&x);
    s1.pop(&x);



    return 0;
}
