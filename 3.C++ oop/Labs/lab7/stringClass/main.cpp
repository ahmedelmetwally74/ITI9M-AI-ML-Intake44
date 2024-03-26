#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char* arr;

public:
    /// Constructor
    String(char* str = "")
    {
        arr = new char[strlen(str) + 1];
        strcpy(arr, str);
    }

    /// Destructor
    ~String()
    {
        delete[] arr;
    }

    /// Copy constructor
    String(const String& s)
    {
        arr = new char[strlen(s.arr) + 1];
        strcpy(arr, s.arr);
    }

    /// Assignment operator
    String& operator=(const String& s)
    {
        if (this != &s)
        {
            delete[] arr;
            arr = new char[strlen(s.arr) + 1];
            strcpy(arr, s.arr);
        }
        return *this;
    }

    /// Getter
    char* get_str()
    {
        return arr;
    }

    /// Concatenation operator
    String operator+(String& s)
    {
        String result;
        result.arr = new char[strlen(arr) + strlen(s.arr) + 1];
        strcpy(result.arr, arr);
        strcat(result.arr, s.arr);
        return result;
    }

    /// Comparison operators
    int operator==(String& s)
    {
        return strcmp(arr, s.arr) == 0;
    }

    int operator!=(String& s)
    {
        return !(*this == s);
    }
};

int main()
{
    String s1("Ahmed ");
    String s2("El Metwally");

    /// Concatenation
    String s3 = s1 + s2;
    cout << "Concatenated String:" << s3.get_str() << endl;


    return 0;
}







/// Comparison
    /*if (s1 == s2)
    {
        cout << "s1 is equal to s2" << endl;
    }
    else
    {
        cout << "s1 is not equal to s2" << endl;
    }
*/
