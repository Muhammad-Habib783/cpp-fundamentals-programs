#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double x,y,result;
	cout<<"\n enter first number ";
	cin>>x;
	cout<<"\n enter second number ";
	cin>>y;
	result=pow(x,y);
	cout<<x<<" raised to the  power "<<y<<" is "<<result;
	return 0;
}