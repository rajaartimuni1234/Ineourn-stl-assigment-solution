#include<iostream>
using namespace std;

template <class T>
  T addition(T num1, T num2){
  	
 	return (num1+num2);
 }
int main(){
	cout<<"\n Addition of Multiple Types of data using Generic Template";
	cout<<"-------------------";
	cout<<"\n Addition of INteger parameter :"<<addition<int>(10,10);
	
	cout<<"\n Addition of float Parameters:"<<addition <float> (15.4, 20.10);
}
