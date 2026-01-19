#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"\n enter the number of terms";
	cin>>n;
	cout<<"\n The natural number upto the "<<n<<"term are"<<"\n ";
	for(i=1;i<=n;i++)
	{
		cout<<i;
		sum=sum+i;
	}
	cout<<"\n The sum of the natural number is :"<<sum;
	return 0;
}