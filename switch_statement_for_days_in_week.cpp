#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\n enter an integer (1-7)";
	cin>>a;
	switch(a)
{
	
	case 1:cout<<"\n Monday";
	       break;
	case 2:cout<<"\n Tuesday";
	       break;
	case 3:cout<<"\n Wednesday";
	       break;
	case 4:cout<<"\n Thursday ";
	       break;
	case 5:cout<<"\n Friday ";
	       break;
	case 6:cout<<"\n Saturday ";
	       break;
	case 7:cout<<"\n Sunday ";
	       break;
    default:cout<<"\n not a valid day";
           break;
}
return 0;
}