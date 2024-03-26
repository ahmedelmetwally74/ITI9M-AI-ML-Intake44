#include <iostream>

using namespace std;
class Stack
{
    int *arr;
    int size;
    int tos;

public:

    Stack(int _size)
    {
        tos = 0;
        size = _size;
        arr = new int[size];
    }

    int Push(int d)
    {
        if (isFull() == 1)
            return 0;
        else
        {
            arr[tos] = d;
            tos++;
            return 1;
        }
    }

    int POP(int *d)
    {
        if (isEmpty() == 1)
            return 0;
        else
        {
            tos--;
            *d = arr[tos];
            return 1;
        }
    }

    int isFull()
    {
        if (tos == size)
            return 1;
        else
            return 0;
    }

    int isEmpty()
    {
        if (tos == 0)
            return 1;
        else
            return 0;
    }

    Stack& operator =(const Stack & s)
    {
        tos = s.tos;
        size = s.size;

        delete [] arr;

        arr = new int[size];

        for (int i = 0; i < tos; i++)
            arr[i] = s.arr[i];

        return *this;
    }

    void ViewContent()
    {
        int x = 0;
        while (isEmpty() != 1)
        {
            POP(&x);
            cout << ":" << x;
        }
    }

    Stack Viewcontent()
    {
        Stack s3(*this);
        s3.Push(4);
        return s3;
    }
};

int main()
{
    Stack s1(5);
    s1.Push(1);
    s1.Push(2);
    s1.Push(3);
    Stack s2(5);
    s2.Push(8);
    s1.Viewcontent();
    s2 = s1;
    int x;
    s1.POP(&x);
    cout << x;
    s1.POP(&x);
    cout << endl << x;
    s2 = s1;

    return 0;
}
