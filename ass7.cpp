#include<iostream>
using namespace std;
int main(){
	//int n;	
	int a,b; 
	
	cout<<"enter your a and b: ";
	cin>> a>>b;
	
/*	for (int i=0; i<n; i++){
	
	 c=a+b;
	 a=b;
	b=c;
	 cout<<a<<" ";
	}
	*/
	
	/*
	if (n==0){
		cout<<"yes";
	}
	while (c<n){
		c=a+b;
		a=b;
		b=c;
	}
	if(c==n){
		cout<<"yes ";
		
	}
	else {
		cout<<"no";
	}
	*/
	 while(b!=0){
	 	int temp=b;
	 	b=a%b;
	 	a=temp;
	 }
	 if (a==1){
	 	cout<<"co prime"<<endl;
	 }
	 else {
	 	cout<<"not co-prime"<<endl;
	 }
}
