#include<iostream>
using namespace std;

template <class T>

void swap (T *n1, T *n2){
	T *temp;
	temp =n1;
	n1=n2;
	n2=temp;
}
 
int main(){
	
	int i1=6, i2=3;
	float f1=7.2, f2=4.5;
	char c1='p', c2='x';
cout<<"before passing data to function template \n";
cout<<"i1= "<<i1<<"\ni2= "<<i2;
cout<<"\n f1= "<<f1 <<"\n f2= "<<f2;
cout<<"\n c1= "<<c1 <<"\n c2= "<<c2;


swap <float>(&f1,&f2);
swap<char> (&c1,&c2);
cout<<"after passing data to function template \n";
cout<<"i1= "<<i1<<"\ni2= "<<i2;
cout<<"\n f1= "<<f1 <<"\n f2= "<<f2;
cout<<"\n c1= "<<c1 <<"\n c2= "<<c2;
return 0;
}
