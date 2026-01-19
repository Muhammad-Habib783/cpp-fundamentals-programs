#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter Marks";
	cin>>marks;
	if(marks>=90&&marks<=100)
{
	cout<<"A+ Grade";
	}
	else if(marks>=80&&marks<=89)
	{
	cout<<"A Grade";
	}
	else if(marks>=70&&marks<=79)
{
		cout<<"B Grade";
		}
	else if(marks>=60&&marks<=69)
		{
	cout<<"C Grade ";
}
	else if(marks>=50&&marks<=59)
		{
	cout<<"D Grade ";
	}
	else if(marks<=50&&marks>=0)
		{
	cout<<"F Grade ";
}
   else
   {
   	cout<<"\n you enter an invalid value ";
   }
return 0;

}