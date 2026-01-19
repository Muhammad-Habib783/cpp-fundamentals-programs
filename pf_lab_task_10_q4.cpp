#include <iostream>
using namespace std;
int main()
 {
    char str[100];
    int vowelcount=0;
	cout<<"Enter a string  ";
    cin.getline(str, 100);
    for (int i=0;str[i]!='\0';i++) 
	{
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
			{
            vowelcount=vowelcount+1;
        }
    }

    cout<<"number of vowels "<<vowelcount<<"\n";
    return 0;
}