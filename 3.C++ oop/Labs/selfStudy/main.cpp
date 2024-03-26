#include <iostream>

using namespace std;
class Square
{
private:
    float length;

public:
    void setLength(float len)
    {
        if (len<0)
            cout<<"Error, Positive Numbers only!";
        else
            length=len;
    }
    float getLength()
    {
        return length;
    }
    float getArea()
    {
        return length*length;

    }

};

int main()
{
    Square s1;
    s1.setLength(12);
    cout<<s1.getArea();
    return 0;
}
