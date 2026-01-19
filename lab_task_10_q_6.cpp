#include <iostream>
using namespace std;
int main()
 {
    const int size=10;
    int A[size],B[size]={0};
    cout << "Enter 10 numbers in array A ";
    for (int i = 0; i < size; i++)
	 {
        cin>>A[i];
    }
    for (int i=0;i<size;i++)
	 {
        B[i]=A[i]*A[i];
    }
    cout<<"The values in Array B are ";
    for (int i=0;i<size;i++) 
	{
        cout<<B[i]<<"\n";
    }
    cout<<"\n";
    cout<<"values in array B which are divisible by 3 are =";
    for (int i=0;i<size;i++) 
	{
        if(B[i]%3==0) 
		{
            cout<<B[i]<<"\n";
        }
    }
    cout<<"\n";
	    return 0;
}