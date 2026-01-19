#include <iostream>
using namespace std;
int find_largest(int arr[], int size) 
{
    int largest=arr[0];
    for(int i=1;i<size;i++)
	 {
        if(arr[i]>largest)
            largest=arr[i];
    }
    return largest;
}
int calculate_sum(int arr[],int size) 
{
    int sum=0;
    for(int i=0;i<size;i++)
	 {
        sum=sum+arr[i];
    }
    return sum;
}
void reverse_array(int arr[],int size)
{
    cout<<"\n reversed array is  ";
    for(int i=size-1;i>=0;i--)
	 {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
 {
     int size=5;
    int arr[size];
    cout<<"enter 5 integers ";
    for(int i=0;i<size;i++)
	 {
        cin>>arr[i];
    }
    cout<<"\n largest number is  "<<find_largest(arr, size);
    cout<< "\n sum of elements are "<<calculate_sum(arr, size);
    reverse_array(arr,size);
	return 0;
}