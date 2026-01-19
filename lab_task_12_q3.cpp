#include<iostream>
using namespace std;
int sum(int n1,int n2)
{
	int sum;
	sum=(n1+n2);
	return sum;
}
int subtract(int n1,int n2)
{
	int subtract;
	subtract=(n1-n2);
	return subtract;
	
}
int multiply(int n1,int n2)
{
	int multiply;
	multiply=(n1*n2);
	return multiply;
}
int divide(int n1,int n2)
{
	int divide;
	divide=(n1/n2);
	return divide;
}
int remainder(int n1,int n2)
{
	int remainder;
	remainder=(n1%n2);
	return remainder;
}
int main()
{
	char choice;
	do
	{
		int n1,n2,result;
	   char op;
	cout<<"\n enter first number ";
	cin>>n1;
	cout<<"\n enter second number ";
	cin>>n2; 
	cout<<"\n enter any operator (Any of +,-,*,/, %)";
	cin>>op;
		switch(op)
		{
			case '+': result=sum(n1,n2);
			cout<<"\n result ="<<result<<endl;
			break;
			case '-':result= subtract(n1,n2);
			cout<<"\n result="<<result<<endl;
			break;
			case '*': result=multiply(n1,n2);
			cout<<"\n result="<<result<<endl;
			break;
			case '/':result= divide(n1,n2);
			cout<<"\n result="<<result<<endl;
			break;
			case '%': result=remainder(n1,n2);
			cout<<"\n result="<<result<<endl;
			break;
		}
		cout<<"\n Do you want to continue (Y/N)";
		cin>>choice;
  }while(choice=='Y'||choice=='y');
	return 0;
}