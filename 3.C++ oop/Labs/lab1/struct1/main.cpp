#include <iostream>
#include <string>

using namespace std;

   // Define the structure of Employee
struct emp {
    int id;
    string name;
    double salary;

    // Function to print the details of the employee
    void print() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create an instance of Employee
    emp emp1;

    // Initialize the details of the employee
    emp1.id = 1;
    emp1.name = "Ahmed El-Metwally";
    emp1.salary = 75000.00;

    // Print the details of the employee
    emp1.print();

    return 0;
}
