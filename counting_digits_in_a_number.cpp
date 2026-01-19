#include<iostream>
using namespace std;
void count_digit(int n)
{
	int count=0;
	n=n/10;
	do{
		
		count++;
	}while(n>0);
	cout<<" \n The total number of digits of a given  number  is ="<<count;
}
int main()
{
	int n;
	cout<<"\n enter a number to count digits";
	cin>>n;
	count_digit(n);
	return 0;
}
