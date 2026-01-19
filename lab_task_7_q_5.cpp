#include <iostream>
using namespace std;
int main()
 {
    for (int i=0;i<=5;i++) 
	{
        for (int j=1;j<=10;j++) 
		{
            cout<<i<<"x"<<j<<"="<<i*j<<"\n";
        }
        cout<<"\n"; 
    }
    system("pause");
    return 0;
}