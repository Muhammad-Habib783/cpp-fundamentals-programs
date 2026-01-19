#include<iostream>
using namespace std;
int main()
{
	int arry[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"\n enter value in 2D array:";
			cin>>arry[i][j];
		}
	}
	cout<<"\n The value stored in two dimensional array is \n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arry[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n The tranpose of 2D array is \n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arry[j][i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}