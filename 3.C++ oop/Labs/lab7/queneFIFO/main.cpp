#include <iostream>

using namespace std;
//template<class<
class Queue
{
private:
    int* arr;
    int Size;
    int tos1;
    int tos2;

public:
    Queue(int _size = 5)
    {
        Size = _size;
        arr = new int[Size];
        tos1 = -1;
        tos2 = -1;
    }

    Queue(const Queue& s)
    {
        Size = s.Size;
        arr = new int[Size];
        tos1 = s.tos1;
        tos2 = s.tos2;

        for (int i = tos1; i <= tos2; i++)
        {
            arr[i] = s.arr[i];
        }
    }

    ~Queue()
    {
        delete[] arr;
    }

    int isFull()
    {
        return (tos2 == Size - 1);
    }

    int isEmpty()
    {
        return (tos1 == -1 || tos1 > tos2);
    }

    int enqueue(int n)
    {
        if (isFull())
        {
            cout << "\n Queue is Full";
            return 0;
        }
        else
        {
            if (isEmpty())
            {
                tos1 = 0;
            }
            tos2++;
            arr[tos2] = n;
            return 1;
        }
    }

    int dequeue(int& n)
    {
        if (isEmpty())
        {
            cout << "\n Queue is Empty";
            return 0;
        }
        else
        {
            n = arr[tos1];
            tos1++;
            return 1;
        }
    }

    void viewContent()
    {
        if (isEmpty())
        {
            cout << "\n Queue is Empty";
        }
        else
        {
            for (int i = tos1; i <= tos2; i++)
            {
                cout << "\n" << arr[i];
            }
        }
    }

    Queue& operator=(const Queue& s)
    {
        if (this == &s)
        {
            return *this;
        }

        delete[] arr;
        Size = s.Size;
        arr = new int[Size];
        tos1 = s.tos1;
        tos2 = s.tos2;

        for (int i = tos1; i <= tos2; i++)
        {
            arr[i] = s.arr[i];
        }

        return *this;
    }

    Queue operator+(const Queue& s2)
    {
        int newSize = Size + s2.Size;
        Queue result(newSize);

        for (int i = tos1; i <= tos2; i++)
        {
            result.enqueue(arr[i]);
        }

        for (int i = s2.tos1; i <= s2.tos2; i++)
        {
            result.enqueue(s2.arr[i]);
        }

        return result;
    }
};

void viewContent(Queue c1)
{
    cout << "Contents of the queue:" << endl;
    c1.viewContent();
}

int main()
{
    int x;

    /// Object From Queue
    Queue c1(3);
    Queue c2(3);

    /// Enqueue elements in the queue
    c1.enqueue(10);
    c1.enqueue(20);
    c1.enqueue(30);

    c2.enqueue(40);
    c2.enqueue(50);
    c2.enqueue(60);

    /// Concatenate c1 and c2 into c3
    Queue c3 = c1 + c2;

    /// Test viewContent Function
    viewContent(c3);

    return 0;
}
