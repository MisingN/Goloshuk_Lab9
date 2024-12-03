#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    string position;
    double salary;
};

string compareSalaries(const Employee& emp1, const Employee& emp2) {
    if (emp1.salary > emp2.salary) {
        return emp1.name + " has a higher salary than " + emp2.name;
    }
    else if (emp1.salary < emp2.salary) {
        return emp2.name + " has a higher salary than " + emp1.name;
    }
    else {
        return emp1.name + " and " + emp2.name + " have the same salary.";
    }
}

int main() {
    Employee employee1 = { "Alice", "Developer", 5000 };
    Employee employee2 = { "Bob", "Manager", 6000 };

    cout << compareSalaries(employee1, employee2) << std::endl;

    return 0;
}