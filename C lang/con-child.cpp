#include<iostream>
using namespace std;
class Parent
{
	public:
		Parent(){
			cout<<"\n parent class cont. called";
		}
		Parent(int y){
			cout<<"\n parent y="<<y;
		}	
};
class Child : public Parent{
	public:
		Child(){
			cout<<"\n Child class con. called";
		}
		Child(int x,int y,int z):Parent(y){
			cout<<"\n child member x="<<x<<"\t z="<<z;
		}
};
main(){
	Child c1;
	Child c2(12,34,56);
}
