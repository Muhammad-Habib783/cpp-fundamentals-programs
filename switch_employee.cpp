#include<iostream>
using namespace std;
int main()
{
	int employeetype,hoursworked;
	double salary,medicalcharges;
	char choice;
	cout<<"\n press 1 for permanent employee ";
	cout<<"\n press 2 for daily wages employee";
	cout<<"\n enter your choice ";
	cin>>employeetype;
	switch(employeetype)
	{
		case 1:
			cout<<"permanent employee selected ";
			break;
		case 2:
			cout<<"\n daily wages employee selected ";
			break;
		default :
			cout<<"\n invalid  employee selected ";
			break;
			
	}
	cout<<"\n press a to calculate salary";
	cout<<"\n press b to calculate medical charges";
	cout<<"\n enter your choice ";
	cin>>choice;
	switch(choice)
	{
		case 'a': 
		cout<<"\n enter the number of hours worked";
		cin>>hoursworked;
		if(employeetype==1)
		{
			salary=hoursworked*800;
		}
		else
		{
			salary=hoursworked*400;
		}
		cout<<"\n total salary :"<<salary;
		break;
		case 'b':
		cout<<"\n enter the total salary ";
		cin>>salary;
		if(employeetype==1)
		{
			medicalcharges=salary*0.05;
		}
		else
		{
			medicalcharges=salary*0.03;
		}
		cout<<"\n medical charges "<<medicalcharges;
		break;
		default:
			cout<<"\n invalid option ";
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 