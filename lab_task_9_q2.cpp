#include<iostream>
using namespace std;
int main()
{
	string grade;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=10;j++)
		{
		   cout<<"\n enter a grade for student "<<j<<":";
        	cin>>grade;
			cout<<"class:"<<i<<" student:"<<j<<": grade "<<grade<<endl;
			
		}
	}
	return 0;
	
}