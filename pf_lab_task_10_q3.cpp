#include<iostream>
using namespace std;
int  main()
{
	int a[10],b[10],c[20];
	cout<<"\n enter 10 number for array a";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		
	}
	cout<<"\n enter 10 number for array b";
	for(int i=0;i<10;i++)
	{
		cin>>b[i];	
	}
	for(int i=0;i<10;i++)
	{
		c[i]=a[i];
		
	}
	for(int i=0;i<10;i++)
	{
		c[i+10]=b[i];
	}
	cout<<"\n merge array c is";
	for(int i=0;i<20;i++)
	{
		cout<<c[i]<<"\n";	
	}
	return 0;
}
	
	
	