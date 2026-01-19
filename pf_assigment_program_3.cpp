#include <iostream>
using namespace std;

int main()
 {
    int designation;
    float monthlysalary,annualsalary,bonus=0;
    cout<<" \n My Name is Muhammad Habib";
    cout<<"\n SAP ID : 62669";
    cout<<" \n Enter the monthly salary ";
    cin>>monthlysalary;
    cout<<"Enter designation 1 for Manager, 2 for Team Lead, 3 for Developer ";
    cin>>designation;
	  annualsalary=(monthlysalary*12);
      switch(designation)
	 {
        case 1:  
            bonus=(annualsalary*0.2); //manager
            break;
        case 2:  
            bonus=(annualsalary*0.15);// team lead 
            break;
        case 3: 
            bonus=(annualsalary*0.1);// developer
            break;
        default:  
            bonus=0;
            break;
    }
    cout<<"\n Annual Salary "<<annualsalary;
    cout<<"\n Annual Bonus "<<bonus;
    return 0;
}
