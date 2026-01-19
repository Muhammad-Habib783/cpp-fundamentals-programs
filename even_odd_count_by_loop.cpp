#include<iostream>
using namespace std;
int main()
{
	int n,count=0,countodd;
	cout<<"\n enter ten numbers ";
	for(int i=1;i<=10;i++)
	{
		cout<<"\n enter "<<i<<" number ";
		cin>>n;
		if(n%2==0)
		{
			cout<<"\n you enter an even number ";
			count++;
		}
		else
	{
		cout<<"\n you entered an odd number ";
		countodd++;
	}
}
	cout<<"\n the total even numbers are "<<count;
	cout<<"\n the total odd numbers are "<<countodd;

	return 0;
	
	}
	
	
	
	
	
	
	
	
	
	
