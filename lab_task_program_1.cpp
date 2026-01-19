#include<iostream>
using namespace std;
int main()
{
	int i,n;
	for(i=1;i<=10;i++)
	{
		cout<<"\n enter "<<i<<" number ";
		cin>>n;
		if(n%2==0)
		{
			cout<<"\n you enetred an even number ";
		}
		else
		{
			cout<<"\n you enetred an odd number ";
		}
	}
	
	return 0;
}
