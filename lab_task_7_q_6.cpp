#include<iostream>
using namespace std;
int main()
{
     int i,j,k,l;
     
    for(i=1;i<=7;i++)
     	{
     	for(int j=7;j>=i;j--)
		 {
     			cout<<" ";
		     }
     		
     		for(k=0;k<i;k++)
			 {
     			
     		cout<<"*";
		     }
		     for(l=1;l<i;l++)
			 {
		     	
			 cout<<"-";
			 }
			 	 
     	cout<<endl;
	     }
       	system("pause");
	return 0;
}