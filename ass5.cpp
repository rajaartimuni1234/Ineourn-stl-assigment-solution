#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter your number";
	cin>>n;
	cout<<endl;
/*	int d;
	while (n%10!=0){
		 n=n/10;
		 d++; 
	}
	cout<<d<<endl;
	*/
/*	int i=2;
	while (i<=n){
		if (n%i==0)
		{
			break;
		}
		i++;
	}
	if (i==n){
		cout<<"prime no";
		
	}
	else {
		cout<<"not prime";
	}
	*/
	int t;
	while (n%10!=0){
		 t=n%10;
		 cout<<t;
		 n=n/10;
	}
}
