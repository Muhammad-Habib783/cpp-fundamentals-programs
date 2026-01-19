#include<iostream>
#include<string>
using namespace std;
int main()
{
	int choice;
	cout<<"\n press 1 for current account   number";
	cout<<"\n presss 2 for savings  number";
	cout<<"\n enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			
			cout<<"\n you have chosen to open a current account  ";
			break;
		
		case 2:
			
			cout<<"\n you have chosen to open a savings account ";
			break;
		
	  default :
				cout<<"\n Invalid choice ";
				system ("pause");
			
			return 0;
	 }
}