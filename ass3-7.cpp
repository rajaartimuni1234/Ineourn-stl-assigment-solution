#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter your year: ";
cin>>x;
 if(x%100==0)
  {
  	if (x%400==0)
  	 cout<<"yes";
  	 else 
  	 cout<<"no";
		  }	
	 else {
	 	if (x%4==0)
	 	cout<<"yes";
	 	else 
	 	cout<<"no";
	 }	

	
	return 0;
}
