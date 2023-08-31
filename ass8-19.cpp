#include<iostream>
using namespace std;
int main (){
  	for (int i=0;i<3;i++){
  		for (int j=0; j<19;j++){
  		if((2-i<=j)&& (j<=6+i)|| (12-i<=j)&&(16+i>=j)){
  				cout<<"*";
			  }
			  else {
			  	cout<<" ";
			  }
			  
		  }
		  cout<<endl;
	  }
	  
	  for (int i=0; i<10; i++){
	  	for ( int j=0; j<19;j++){
	  		 if (i==0 && j==6)
	  		 cout<<"mysirg";
	  		 if(i==0 && j>=6 && j<=11)
	  		 continue;
	  		if (j>=i && j<=18-i){
	  			
	  			cout<<"*";
			  }
			  else {
			  	cout<<" ";
			  }
		  }
		  cout<<endl;
	  }
}
