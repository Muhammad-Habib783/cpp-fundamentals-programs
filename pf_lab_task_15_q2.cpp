#include <iostream>
#include <string>
using namespace std;
struct employee
 {
    int employeeID;
    string name;
    float basicSalary;
    float allowances;
    float deductions;
    float netSalary;
};
int main() 
{
    employee employees[1];
    for(int i=0;i<1;i++)
     {
        cout<<"\n enter detail of employee "<<i+1;
        cout<<"\n employee id ";
        cin>>employees[i].employeeID;
        cout<<"\n employee name ";
        cin.ignore(); 
        getline(cin,employees[i].name);
        cout<<"\n employee basic salary ";
        cin>>employees[i].basicSalary;
        cout<<"\n employee allowance  ";
        cin>>employees[i].allowances;
        cout<<"\n employee deductions ";
        cin>>employees[i].deductions;
        employees[i].netSalary=(employees[i].basicSalary+employees[i].allowances-employees[i].deductions);
    }
    cout<<"\n employee details ";
    for(int i=0;i<1;i++) 
    {
        cout<<"\n employee id is "<<employees[i].employeeID;
        cout<<"\n employee name is "<<employees[i].name;
        cout<<"\n basic salary is "<<employees[i].basicSalary;
        cout<<"\n allowance is "<<employees[i].allowances;
        cout<<"\n deduction is  "<<employees[i].deductions;
        cout<<"\n net salary is "<<employees[i].netSalary;
    }
    return 0;
} 