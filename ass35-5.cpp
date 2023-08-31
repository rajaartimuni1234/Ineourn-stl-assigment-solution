#include<iostream>
using namespace std;

class Shape {
	string shape;
	public :
		Shape(){
			
		}
		Shape (string s){
			shape=s;
		}
		void setShape (string s){
			shape=s;
		}
		string getShape (){
			return shape;
		}
};

template <typename T> 

class Circle :public Shape {
	T x;
	T y;
	T radius;
	public :
		Circle (T CenterX, T CenterY, T r, string s):Shape (s){
			x =CenterX;
			y=CenterY;
			radius =r;
		}
		
		Circle (T r):Shape(){
      radius=r;	
     }

       Circle (T CenterX,T CenterY,T r):Shape(){
	x=CenterX;
	y=CenterY;
	radius=r;
} 
   Circle(){
   }
   
  T area(){
   	return 3.14 *radius *radius;
   }
}; 

int main(){
	Circle <float>c(0.1);
	cout<<"\n Aread of cirlce A "<<c.area()<<endl;
	cout<<"\n color of Cirlce A "<<c.getShape()<<endl;
} 






