#include <iostream>
using namespace std;
void addnumbers()
 {
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"sum "<<(a + b)<<"\n";
}
void find_largest_in_array()
 {
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"\n enter "<<n<<" numbers ";
    for(int i=0;i<n;i++) 
	{
        cin>>arr[i];
    }
    int largest=arr[0];
    for (int i=1;i<n;i++) 
	{
        if(arr[i]>largest) 
		largest=arr[i];
    }
    cout<<"largest number "<<largest<<endl;
}
void reversestring()
 {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"\n enter "<<n<<" elements ";
    for(int i=0;i<n;i++)
	 {
        cin>>arr[i];
    }
    cout<<"\n reversed array is  ";
    for(int i=n-1;i>=0;i--)
	 {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() 
{
    int choice;
    do {
        cout<<"\n Menu  \n";
        cout<<"1  Add Two Numbers \n";
        cout<<"2  find largest number in the  array \n";
        cout<<"3  reverse a string \n";
        cout<<"4  exit \n";
        cout<<"enter your choice ";
        cin>>choice;
       switch (choice)
	    {
            case 1:
			 addnumbers(); 
			break;
            case 2:
			 find_largest_in_array();
			 break;
            case 3:
			 reversestring(); 
			break;
            case 4: 
			cout<<"exit  program"; 
			break;
            default: 
			cout <<"\n Try again";
        }
    } while (choice != 4);
    return 0;
}