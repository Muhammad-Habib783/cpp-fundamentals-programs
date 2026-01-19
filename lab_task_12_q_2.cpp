#include<iostream>
using namespace std;
int factorial(int n,int f)
{
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,f=1;
	cout<<"\n enter a number to find factorial";
	cin>>n;
	f=factorial( n,f);
	cout<<"\n the factorial of a number is "<<f;
	return 0;

}
