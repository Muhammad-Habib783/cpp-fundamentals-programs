#include<iostream>
using namespace std;
int main ()
{
	int x,y,sum1,sum2, sum;
	cout<<"enter a first number:";
	cin>>x;
	sum1=x+2;
	cout<<"sum of first numbeer  is :"<<sum1<<endl;
	cout<<"enter a second  number:"<<endl;
	cin>>y;
	sum2=y+3;
	cout<<"sum of second number  is :"<<sum2<<endl;
	sum=sum1+sum2;
	cout<<"Result of sum1 and sum2  is : "<<sum<<endl;
	cout<<"size of sum1 "<<sizeof(sum1);
}