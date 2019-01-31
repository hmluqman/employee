#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string &first,const std::string &last,
                    const std::string &ssn, double salary)
                    : Employee(first, last, ssn)
        {
            setWeeklySalary(salary);
        }

void SalariedEmployee::setWeeklySalary(const double &salary)
{
    if (salary > 0.0 )
        weeklySalary = salary;
    else
        throw std::invalid_argument("Weekly Salary must be greater than 0.0"); 
}

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}

void SalariedEmployee::print() const 
{
    std::cout << "Salaried Employee ";
    Employee::print();
    std::cout << "Weekly Salary" << getWeeklySalary();
}
