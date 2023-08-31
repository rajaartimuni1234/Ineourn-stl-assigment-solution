#include<iostream>
using namespace std;

int main(){
	for (int i=0; i<5;i++){
		for(int j=0; j<9;j++){
			if(i==0||j==i||j==8-i){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}

}
