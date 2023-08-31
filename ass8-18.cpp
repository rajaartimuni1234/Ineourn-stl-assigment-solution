#include<iostream>
using namespace std;

int main(){
	for (int i=0 ;i<5; i++){
		for (int j=0; j<=9;j++){
			if (j>=4-i && j<=4+i){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
		for (int i=0 ;i<5; i++){
		for (int j=0; j<9;j++){
			if (j>=i && j<=8-i){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	  int k=1;
		for (int i=0 ;i<4; i++){
			
		for (int j=0; j<=7;j++){
			k=i;
			if (j>=4-i && j<=4+i){
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
