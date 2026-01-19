#include<iostream>
using namespace std;
int main ()
{
	int marks;
	cout<<"Enter Marks";
	cin>>marks;
	if(marks>=80)
{
	cout<<"A Grade";
	}
	else if(marks>=70)
	{
	cout<<"B Grade";
	}
	else if(marks>=60)
{
	cout<<"C Grade"<<endl;
	}
	
	else
 {
	cout<<"fail ";
	}
	return 0;
}