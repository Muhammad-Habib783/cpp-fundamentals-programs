 #include <iostream>
 #include<string.h>
using namespace std;
int main()
 {
	  string correctpassword="password123",password;
 	while(true)
 	{
 		cout<<"\n enter password";
 	    cin>>password;
 		
 	if(password==correctpassword)
	 {
	 	cout<<"\n login successful";
	 	break;
	 }
 	else{
 		
 		cout<<"\n try again";
	 }
}
    return 0;
} 
