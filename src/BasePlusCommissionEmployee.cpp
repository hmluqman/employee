#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string &first,const std::string &last,
            const std::string &ssn, double gs, double cr, double bs)
            : CommissionEmployee(first, last, ssn, gs, cr)
{
                setBaseSalary(bs);
}

void BasePlusCommissionEmployee::setBaseSalary(const double salary)
{
    if (salary > 0.0 )
        baseSalary = salary;
    else
        throw std::invalid_argument("Base Salary must be > 0.0");
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const 
{
    std::cout << " Base Salaried ";
    CommissionEmployee::print();
    std::cout << "Base Salary "<<getBaseSalary()<< std::endl;
}