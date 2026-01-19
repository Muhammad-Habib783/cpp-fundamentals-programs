#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],sum=0;
    cout<<"\n Enter an elements in  2D array :\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"\n Elements in 2D array are :";
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<endl;
    }
    cout<<"\n Sum of elements in 2D array are :"<<sum;
    int larger=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
if(arr[i][j]>larger)
{
    larger=arr[i][j];
}
        }
    }
    cout<<"\n largest element in 2D array is :"<<larger;
    return 0;
}