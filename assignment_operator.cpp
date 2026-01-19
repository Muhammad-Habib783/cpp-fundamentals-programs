#include<iostream>
using namespace std;
int main() 
{
	int n1,n2,n3;
	n1=55;    //assigment operator    
	n2=56;
	n3=n1;
	if(n1>n2)
      {
	  cout<<"N1 is greater which is "<<n1;
}
   else if(n2>n1)
   { 
   cout<<"N2 is greater which is "<<n2;
   }
   else if(n1==n2)
   {
   	cout<<"Both are equal "<<n1<<"\t"<<n2;
   }
   else
   {
   	cout<<"invalid   number";
   }
   return 0;
}