#include<iostream>
using namespace std;
int main(){
	int a=5, b=7, c=8;
	int D=b*b-4*a*b;
	if (D>0){
		cout<<"real & Distinct";
		
	}
	else if (D==0){
		cout<<"real & equal";
		
	}
	else{
		cout<<"img and roots";
	}
	
	
	return 0;
}
