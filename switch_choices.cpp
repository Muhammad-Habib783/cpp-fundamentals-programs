#include<iostream>
using namespace std;
int main()
{
	int num1,num2,choice;
	cout<<"\n enter first number ";
	cin>>num1;
	cout<<"\n enter  second number";
	cin>>num2;
	cout<<"\n press 1 to find whether the numbers are  even or odd";
	cout<<"\n press 2 to find the numbers  are  divisible by 5";
	cout<<"\n press  3 to adding two numbers ";
	cout<<"\n press 4 to subtract the two numbers ";
	cout<<"\n press 5 to multiply the two numbers ";
	cout<<"\n press 6 to divide the two numbers ";
	cout<<"\n enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1: 
		if(num1%2==0)
		{
			cout<<"num1 is even number ";
		}
		else 
		{
		cout<<"\n num1 is odd number ";
		}
		if(num2%2==0)
		{
			cout<<"\n num2 is even number ";
		}
		else 
		{
		cout<<"\n num2 is odd number ";
	}
	break;
	case 2:
		if(num1%5==0)
		{
			cout<<"num1 is divisible by 5 ";
		}
		else 
		{
		cout<<"\n num1 is not  divisible by 5  ";
		}
		if(num2%5==0)
		{
			cout<<"\n num2 is  divisible by 5 ";
		}
		else 
		{
		cout<<"\n num2 is is   not divisible by 5 ";
	}
	break;
	case 3:
		int sum;
		sum=(num1+num2);
		cout<<"\n The addition of two number is  "<<sum;
		break;
		case 4:
		int sub;
		sum=(num1-num2);
		cout<<"\n The difference  of two number is  "<<sub;
		break;
			case 5:
		int mult;
		mult=(num1*num2);
		cout<<"\n The addition of two number is  "<<mult;
		break;
			case 6:
		int div;
		div=(num1/num2);
		cout<<"\n The division  of two number is  "<<div;
		break;
		system ("pause");
		return 0;
		
		}
	}
	
	
	
	
