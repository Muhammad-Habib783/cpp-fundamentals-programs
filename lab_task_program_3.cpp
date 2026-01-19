#include<iostream>
using namespace std;
int main()
{
	int number,limit;
	cout<<" \n enter the number";
	cin>>number;
	cout<<" \n enter the  limit";
	cin>>limit;
	for(int i=1;i<=limit;i++)
	{
		cout<< number <<" x "<< i <<"="<<number*i<<"\n";
	}
	return 0;
	
}