#include<iostream>
using namespace std;
int main() 
{
  int amount,balance=50000;
  char choice;
  cout<<"\n enter your amount for widraw  ";
  cin>>amount; 
  
  while(amount<=balance)
  {
  	cout<<" \n your can widraw   "<<amount;
  	cout<<"\n your remaining amount is"<<balance-amount;
    cout<<"\n do you want to continue press y else no than  press n  ";
  	cin>>choice;
  	switch(choice )
  	{
  		case 'y':cout<<"\n enter amount for widraw ";
  		cin>>amount;
  		break;
  		case 'n':cout<<"\n thank you";
  		break;
	  }
   }
    return 0;
	 }