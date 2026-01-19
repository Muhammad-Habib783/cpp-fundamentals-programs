#include<iostream>
using namespace std;
int volume_of_cuboid(int length,int width=4,int height=5)
{
	return length*width*height;
}
int area_of_rectangle(int num1,int num2)
{
	return num1*num2;
}
int maximum_find(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void even_odd_check(int num)
{
	if(num%2==0)
	{
		cout<<"\n"<<num<<"is even";
	}
	else
	{
		cout<<"\n"<<num<<"is odd";
	}
}
int factorial(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int num1,num2,num3,num;
	cout<<"\n enter length,width,height  to volume of cuboid";
	cin>>num1>>num2>>num3;
	cout<<"\n volume with arguments"<<volume_of_cuboid(num1,num2,num3);
	cout<<"\n enter a length";
	cin>>num1;
	cout<<"\n volume with default arguments is "<<volume_of_cuboid(num1);
	cout<<"\n enter length and width to calculate area of rectangle";
	cin>>num1>>num2;
	cout<<"\n The area of rectangle is "<<area_of_rectangle(num1,num2);
	cout<<"\n enter two numbers to calculate maximum ";
	cin>>num1>>num2;
	cout<<"\n maximum number is: "<<maximum_find(num1,num2);
	cout<<"\n enter a number to check even/odd :";
	cin>>num;
	even_odd_check(num);
	cout<<"\n enter a number to calculate factorial";
	cin>>num;
	cout<<"\n The factorial is "<<factorial(num);
	return 0;
}