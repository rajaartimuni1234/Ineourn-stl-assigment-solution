#include<iostream>
using namespace std;

template <class T>
T sum (T a[], T length){
	T ret =a[0];
	for (int i=1; i<length; i++){
		ret =ret+a[i];
	}
	return ret;
}
int main(){
int in_data[5];
float fl_data[5];
int i;
cout<<"\n input 5 integers:: \n"<<endl;
for (i=0; i<5; i++){
	cin>>in_data[i];
}
cout<<"\n sum of int array:: "<<sum<int> (in_data,5)<<endl;
cout<<"\n input 5 floats:: \n"<<endl;
 for (i=0; i<5;i++){
 	cin>>fl_data[i];
 }
 
 cout<<"\n sum off float array:: "<<sum<float> (fl_data,5)<<endl;
return 0;
}
