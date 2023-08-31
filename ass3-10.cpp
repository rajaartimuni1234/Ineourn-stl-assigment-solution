#include<iostream>
using namespace std;
int main(){
	int cp, sp , profit,lose;
	cout<<"please enter cost price ";
	cin>>cp;
	cout<<endl;
	cout<<"please enter selling price";
	cin>>sp;
	cout<<endl;
	if (sp>cp){
		profit=((sp-cp)/cp)*100;
		
		cout<<"your profit is "<<profit<<endl;
		
	}
	else {
		lose =((cp-sp)/cp)*100;
		cout<<"your lose is "<<lose<<endl;
	}
}
