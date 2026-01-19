#include<iostream>
using namespace std;
int maximum_find(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void even_odd_check(int num)
   {
	if(num%2==0)
	{

		cout<<"\n"<<num<<" is even";
	}
	else
	{
		cout<<"\n"<<num<<" is odd";
	}
}
int factorial(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
			}
			return f;
}
int main()
{
	int num1,num2,num;
	cout<<"\n enter two numbers to calculate maximum  ";
	cin>>num1>>num2;
	cout<<"maximum is "<<maximum_find(num1,num2);
	cout<<"\n enter a number to check whether it is even or odd ";
	cin>>num;
	even_odd_check(num);
	cout<<"\n enter a number to calculate factorial  ";
	cin>>num;
	cout<<"\n factorial of a number is "<<factorial(num);
	
	return 0;
}
    





   
   
    
    
   