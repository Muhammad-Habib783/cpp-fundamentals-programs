#include<iostream>
using namespace std;
int main()
{
	
    int arr[4][5]={29,87,65,76,66,89,98,81,82,22,55,77,55,44,55,66,99,77,55,76};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
          cout<<"\n student registration number"<<i+1<<" "<<"Marks in subject"<<j+1<<" = "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
	
 }