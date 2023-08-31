#include<iostream>
using namespace std;
int main(){
char a;
cout<<"enter your character ";
cin>>a;
if ((a>='a')&&(a<='z'))
{
	cout<<"a is lowercase"<<endl;
	
}
else if (a>='A'&& a<='Z'){
	cout<<"a is uppercase"<<endl;
	
}
else if (a>='0'&&a<='9'){
	cout<<"a is number"<<endl;
}
else {
	cout<<"a is symbol"<<endl;
}
}
