#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"enter triangle side ";
	cin>>a>>b>>c;
	cout<<endl;
	if ((a+b)==c &&(b+c)==a && (c+a)==b){
		cout<<"triangle is valid"<<endl;
		
	}
	else {
		cout<<"triangle is not valid"<<endl;
	}
}
