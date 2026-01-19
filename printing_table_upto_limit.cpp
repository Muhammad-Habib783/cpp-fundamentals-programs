#include<iostream>
using namespace std;
int main()
{
	int n,limit;
	cout<<"\n enter first number ";
	cin>>n;
	cout<<"\n enter the limit ";
	cin>>limit;
	for(int i=1;i<=limit;i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}