#include <iostream>
using namespace std;
int main() 
{
    const int size=5;
    int A[size];
    cout<<"Enter 5 elements in array A ";
    for (int i=0;i<size;i++)
	 {
        cin>>A[i];
    }
    for (int i=0;i<size;i++) 
	{
        if (A[i]%2!=0) 
		{
            A[i]=A[i]+1; 
        }
    }
    for (int i=0;i<size-1;i++) 
	{
        for (int j=0;j<size-i-1;j++)
		 {
            if (A[j]>A[j+1])
			 {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    cout<<"sorted Array  ";
    for (int i=0;i<size;i++) 
	{
        cout<<A[i]<<" ";
    }
    cout << endl;
    return 0;
}