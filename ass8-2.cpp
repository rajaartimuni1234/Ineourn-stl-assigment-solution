#include<iostream>
using namespace std;
int main(){
	/*
for (int i=1; i<=5;i++){
	for (int j=1; j<=5;j++ ){
		if (j>=i){
			cout<<"*";
		}
		else {
			cout<<" ";
		}
	}
	cout<<endl;
}
*/
/*
char k='A';
for (int i=1; i<=5;i++){
  k='A';
	for (int j=1; j<=5;j++ ){
		
		if (j>=i){
			
			cout<<k;
			k++;
		}
		else {
			cout<<" ";
		}
	}
	cout<<endl;
}
*/
int k=1;
for (int i=1; i<=5;i++){
	k=1;
	for (int j=1; j<=5;j++ ){
		if (j>=i){
			cout<<k;
			k++;
		}
		else {
			cout<<" ";
		}
	}
	cout<<endl;
}
}
