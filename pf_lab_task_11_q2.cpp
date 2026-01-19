#include<iostream>
using namespace std;
int main() {
    const int rows=4;
    const int cols=4;
    int arr[rows][cols];
    int largest=0;
    int largestrow=0;
    int largestcol=0;
    for(int i=0;i<rows;i++)
	 {
        for(int j=0;j<cols;j++)
		 {
            int value;
            do {
                cout<<"Enter value for matrix["<<i<<"]["<<j<< "] (max 100): ";
                cin>>value;
            } while(value>100);
            arr[i][j]=value;
            if (value>largest)
			 {
                largest=value;
                largestrow=i;
                largestcol=j;
            }
        }
    }
    for(int i=0;i<4;i++)
	{
    	for(int j=0;j<4;j++)
		{
    		cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
    cout<<"Largest number: "<<largest<<"\n";
	cout<<" at location:("<<"Row"<<largestrow<<"),"<<"(Colum"<<largestcol<<")"<<"\n";
    return 0;
}

