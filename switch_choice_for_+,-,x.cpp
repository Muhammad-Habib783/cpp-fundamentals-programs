#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1,num2,summ,subb,mull;
	char choice;
	cout<<"\n Enter first  number";
	cin>>num1;
	cout<<"\n Enter second  number";
	cin>>num2;
	cout<<"\n enter + for addition ";
	cout<<"\n enter - for subtraction ";
	cout<<"\n enter * for multliplication ";
	cin>>choice;
	switch(choice)
	{
		case  '+': 
		{
		
		int summ=num1+num2;
		cout<<"\n your  result is " <<summ<<endl;
		break;
	}
	    case '-': 
	    {
		
		int subb=num1-num2;
		cout<<"\n your  result is " <<subb<<endl;
		break;
	}
		case '*':
		{
		int mull=num1*num2;
		cout<<"\n your  result is " <<mull<<endl;
		break;
	}
		default:
			{
			cout<<"\n You entered wrong choice ";
		}
			return 0;
		
	}
	
	
}