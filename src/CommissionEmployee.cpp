#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const std::string &first,const std::string &last,
            const std::string &ssn, double gs, double cr)
            : Employee(first, last, ssn)
{
            setGrossSales(gs);
            setCommissionRate(cr);
}

void CommissionEmployee::setCommissionRate(const double rate)
{
    if (rate > 0.0 && rate < 1.0)
        commissionRate = rate;
    else
        throw std::invalid_argument("Weekly Salary must be > 0.0 and < 1.0");
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

void CommissionEmployee::setGrossSales(const double sales)
{
    if (sales > 0.0)
        grossSales = sales;
    else
        throw std::invalid_argument("Gross Sales must be > 0.0");
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print() const 
{
    std::cout << "Commission Employee ";
    Employee::print();
    std::cout << "Gross Sales " << getGrossSales()
    << "Commission Rate "<<getCommissionRate()<< std::endl;
}