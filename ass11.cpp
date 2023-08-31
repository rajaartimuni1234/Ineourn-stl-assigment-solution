#include<iostream>
using namespace std;
int main(){
	int a , b, c, d ,e;
	cout<<"enter your marks " ;
	cin>>a>>b>>c>>d>>e;
	cout<<endl;
	if (a>33 && b>33 && c>33 && d>33 &&e>33){
		cout<<"student pass"<<endl;
	}
	else {
		cout<<"student failed"<<endl;
	}
}
