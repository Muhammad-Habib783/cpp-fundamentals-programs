#include <iostream>
using namespace std;
int main()
 {
    char str[100];
    int capitalcount=0;
	cout<<"Enter a string ";
    cin.getline(str, 100);
    for (int i=0;str[i]!='\0';i++) 
	{
        if (str[i]>='A'&&str[i]<='Z') 
			{
            capitalcount=capitalcount+1;
        }
    }

    cout<<"number of capital characters are  "<<capitalcount<<"\n";
    return 0;
}