#include<iostream>
using namespace std;

template <class T>
  T largest(T num1, T num2){
  	if (num1>num2){
  		return num1;
	  }
	  else {
	  	return num2;
	  }
 	
 }
int main(){
	cout<<"\n largest number of Multiple Types of data using Generic Template";
	cout<<"-------------------";
	cout<<"\n largest of INteger parameter :"<<largest<int>(50,10);
	
	cout<<"\n largest of float Parameters:"<<largest <float> (15.4, 20.10);

return 0;
}
