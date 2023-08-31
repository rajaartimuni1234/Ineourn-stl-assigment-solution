#include<iostream>
using namespace std;
int main(){
	
	int l,u,x,i;
	cout<<"enter two numbers ";
	cin>>l;
	
   cout<<endl<<"prime number";
   /*
	for(x=1+1;x<=u-1;x++){
		for ( i=2; i<x;i++){
		if (x%i==0){
			break;
		}
		
	}
	if (i==x)
	cout<<x<<" ";
	}
	*/
		for(x=1+1;x<=l+2;x++){
		for ( i=2; i<x;i++){
		if (x%i==0){
			break;
		}
		
	}
	if (i==x)
	cout<<x<<" ";
	}

}
