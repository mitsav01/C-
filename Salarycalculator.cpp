/* Program to calculate monthly salary from given annual salary*/

#include <iostream>
using namespace std;

int main()
{
    float annualSalary;
    cout<< "Your annual salary is ";
    cin>> annualSalary;
    float monthlySalary = annualSalary/12;
    cout<< "\nYour monthly salary is " << monthlySalary ;

    return 0;
}