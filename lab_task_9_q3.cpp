#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{

    for (int i=1;i<=7;i++) 
	{
        cout<<"The attendance of class "<<i<<" is as follows :"<< endl;
        for (int j=1;j<=15;j++) 
		{
        	int c=0;
            cout<<"Student no "<<j<<" : ";
            for (int k=1;k<=30;k++) 
			{ 
                if(rand()%5<1) 
				{
                    cout<<"A ";
                    
                } 
				else 
				{
                    cout<<"P ";
                    c++;
                }
            }
            cout<<"Present days :"<<c;
            cout<<endl;
        }
        cout << endl;
    }
    return 0;
}