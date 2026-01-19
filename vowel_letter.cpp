#include<iostream>
using namespace std;
int main()
{ 
   cout<<"\n enter an alphabet";
   	char option=0;
	cin>>option;
	switch(option)
	{
	    	case'a':
			case'e':
	    	case'i':
	    	case'o':
		    case'u': 
			
			cout<<"\n you enter a vowel";
			break;
			default:cout<<"\n you enter consonent";
		}
	return 0;
}
	