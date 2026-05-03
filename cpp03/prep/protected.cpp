#include <iostream>
#include <string>


// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  std::cout << "Salary: " << myObj.getSalary() << "\n";
  std::cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}
