#include <iostream>
using namespace std;
int main() 
{
    int a[15],choice;
    for(int i=0;i<15;i++)
	 {
        cout<<"Enter the number "<<i+1<<":";
        cin>>a[i];
    }
        cout<<"1 for add 2 / make even\n2 for count divisible by 6\n3 for multiply by 2\n4 for subtract 4\n5for  count>=10\n6 for quit ";
        cout<<"Enter your choice: ";
        cin>>choice;
       switch(choice) 
	   {
            case 1: 
			{
                cout << "new array is ";
                for(int i=0;i<15;i++) 
				{
                    if(a[i]%2==0) 
					{
                        a[i]=a[i]+2;
                    } else {
                        a[i]=a[i]+1;
                    }
                    cout<<a[i]<<"\n";
                }
                cout<<"\n";
                break;
            }
            case 2:
			 {
                int count=0;
                for (int i=0;i<15;i++) 
				{
                    if (a[i]%6==0) 
					{
                        count=count+1;
                    }
                }
                cout<<"total numbers divisible by 6 are : "<<count<<"\n";
                break;
            }
            case 3: 
			{
                cout<<"multiply array ";
                for(int i=0;i<15;i++) 
				{
                    a[i]=a[i]*2;
                    cout<<a[i];
                }
                cout<<"\n";
                break;
            }
            case 4:
			 {
                cout<<"subtract  array  is ";
                for(int i=0;i<15;i++) 
				{
                    a[i]=a[i]-4;
                    cout<<a[i];
                }
                cout<<"\n";
                break;
            }
            case 5: 
			{
                int count=0;
                for(int i=0;i<15;i++)
				 {
                    if(a[i]>=10)
					 {
                        count=count+1;
                    }
                }
                cout<<"count of integers>=10 "<<count<<"\n";
                break;
            }
            case 6:
                cout<<"Exit  the program"<<"\n";
                break;
            default:
                cout<<"invalid choice"<<"\n";
       } 

    return 0;
}