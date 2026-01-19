#include<iostream>
using namespace std;
int main() 
{
	int num1,num2,num3;
	cout<<" \n enter value of first number any integer: ";
	cin>>num1;
	cout<<"\n enter value of second number any integer :";
	cin>>num2;
	cout<<"\n enter the value of third number any integer :";
	cin>>num3;
	if(num1>num2&&num1>num3)
	{
		cout<<"\n number 1 is greatest: which is "<<num1;
	}
	else if(num2>num1&&num2>num3)
	{
	cout<<"\n number 2 is greatest: which is "<<num2;
   }
   else 
   {
   cout<<"\n number 3 is greatest: which is "<<num3;
}   	
}