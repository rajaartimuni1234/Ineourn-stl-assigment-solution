#include<array>

#include<iostream>
using namespace std;


int  main()
{
   array<int,5> value {10,20,30,40,50};
	//print element
	
	cout<<"element at index 0"<<value[0]<<endl;
	cout<<"element at index 1"<<value[1]<<endl;
	cout<<"element at index 2"<<value[2]<<endl;
	cout<<"element at index 3"<<value[3]<<endl;		
   cout<<"element at index 0"<<value[0]<<endl;		
	cout<<"element at index 4"<<value[4]<<endl;
	
	//reference
	value[1]=33;
	value[5]=44;
	
	for(int i:value){
		cout<<i<<" ";
	}	

	cout<<value.size();
}

