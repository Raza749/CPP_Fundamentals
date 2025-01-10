#include <iostream>
#include <algorithm>
#include <iterator> // Fixed: Incorrect header name `iteration` replaced with `iterator`
#include <string>
#include <vector>
#include <numeric> // Include for `accumulate`

using namespace std;

// Employee structure
struct Employee
{
    int id;
    string name;
    double salary;
};

// Function to display employee details
void displayEmployee(const Employee &emp)
{
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main()
{
    // Employee data
    vector<Employee> employee = {
        {1, "Raza", 999999.99},
        {2, "Fari", 234567.99}, // Fixed: Missing comma after `Fari`
        {3, "Hassan", 6543543.99},
        {4, "Hasain", 76543543.0}, // Ensured consistent salary type (double)
        {5, "Umme", 87654354.0}};  // Ensured consistent salary type (double)

    // Sorting employees by salary (highest to lowest)
    sort(employee.begin(), employee.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employees sorted by salary => Highest to lowest: " << endl;

    // Display sorted employees
    for_each(employee.begin(), employee.end(), displayEmployee);

    // Vector to store high earners
    vector<Employee> highEarners;

    // Copy employees with a salary greater than 50000
    copy_if(employee.begin(), employee.end(), back_inserter(highEarners), [](const Employee &e)
            { return e.salary > 50000; }); // Fixed: `back_inseter` -> `back_inserter`, `cosnt` -> `const`

    cout << "\nEmployees who are high earners:" << endl;
    for_each(highEarners.begin(), highEarners.end(), displayEmployee); // Fixed: Loop over `highEarners`

    // Calculate total salary
    double totalSalary = accumulate(employee.begin(), employee.end(), 0.0, [](double sum, const Employee &e)
                                     { return sum + e.salary; }); // Fixed: `doube` -> `double`

    // Calculate average salary
    double averageSalary = totalSalary / employee.size();
    cout << "\nTotal Salary: $" << totalSalary << endl;
    cout << "Average Salary: $" << averageSalary << endl;

    // Find the highest-paid employee
    auto highestPaid = max_element(employee.begin(), employee.end(), [](const Employee &e1, const Employee &e2)
                                    { return e1.salary < e2.salary; });

    cout << "\nHighest Paid Employee: ";
    if (highestPaid != employee.end())
    {
        displayEmployee(*highestPaid);
    }

    return 0;
}
