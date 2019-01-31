#ifndef COMMISSION_H
#define COMMISSION_H 

#include "Employee.h"
#include <stdexcept>

class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee(const std::string &,const std::string &,
                    const std::string &, double = 0.0, double = 0.0);

        virtual ~CommissionEmployee(){ }

        void setCommissionRate(const double);
        double getCommissionRate() const;

        void setGrossSales(const double);
        double getGrossSales() const;

        virtual double earnings() const override;
        virtual void print() const override;
    private:
        double grossSales;
        double commissionRate;
};

#endif