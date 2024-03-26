#include <iostream>
#include <string>

using namespace std;

// Define the class Employee
class Employee {
private:
    int id;
    string name;
    double salary;

public:
    // Default constructor
    Employee() : id(0), name("Not Set"), salary(0.0) {}

    // Parameterized constructor
    Employee(int newID, string newName, double newSalary)
        : id(newID), name(newName), salary(newSalary) {}

    // Accessor functions (getters)
    int get_id() const { return id; }
    string get_name() const { return name; }
    double get_salary() const { return salary; }

    // Mutator functions (setters)
    void set_id(int newID) { id = newID; }
    void set_name(string newName) { name = newName; }
    void set_salary(double newSalary) { salary = newSalary; }

    // Function to print the details of the employee
    void print() const {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create an instance of Employee
    Employee emp1(1, "Ahmed", 75000.00);

    // Print the details of the employee
    emp1.print();

    // Modify the employee details
    emp1.set_id(2);
    emp1.set_name("Mohamed");
    emp1.set_salary(80000.00);

    // Print the updated details of the employee
    emp1.print();

    return 0;
}
