#include<iostream>
using namespace std;
int main()
{
	int attempts=1,password=123;
	while(attempts<=3)
	{
		cout<<"\n enter the password :";
		cin>>password;
		if(password==123)
		{
			cout<<"\n you enter a correct password ";
			break;
		}
		else {
			
			if(attempts==3)
	{
	cout<<"\n logout";
	break;
 }
  else 
 {
 	cout<<"\n try again";
		
attempts++;
 }
					
	}	
}
	return 0;
}