#include<iomanip>
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <vector>
#include<typeinfo>
using namespace std;
int main()
{
    std::cout << fixed << setprecision(2);
    std::vector <Employee*> employees(3);

    employees[0] = new SalariedEmployee("John", "Smith", "111-111-11", 800);
    employees[1] = new CommissionEmployee("Hafiz", "Luqman", "111-111-22", 1000,0.06);
    employees[2] = new BasePlusCommissionEmployee("Roger", "Federer", "111-333-33", 1000,0.04,300);

    for(Employee *employeePtr : employees)
    {
        employeePtr->print();
        std::cout<<endl;

        BasePlusCommissionEmployee *derivedPtr = dynamic_cast<BasePlusCommissionEmployee*>(employeePtr);
        if (derivedPtr != nullptr)
        {
            double oldSalaray = derivedPtr->getBaseSalary();
            cout << " Base Salary "<< oldSalaray <<endl;
        }
    }

    for(Employee *employeePtr : employees)
    {
        cout<< "deleting object of"
        << typeid(*employeePtr).name()<<endl;
        delete employeePtr;
    }
    return 0;
}
