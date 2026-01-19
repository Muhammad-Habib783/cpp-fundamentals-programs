#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter a number to print table ";
    cin>>n;
    for(int j=1;j<=n;j++)
    {
    for(int i=1;i<=10;i++)
    {
        cout<<j<<"x"<<i<<"="<<j*i<<endl;
    }
    }
    return 0;
	
	
}