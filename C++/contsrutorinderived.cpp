#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"\n parent class con.called";
		}
		Parent(int x){
			cout<<"\n in parent x="<<x;
		}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"\n Child class con. called";
		}
		Child(int m,int y,int x):Parent(x){
			cout<<"\n in child m="<<m<<"\t y="<<y;
		}
};
main(){
	Child c1;
	Child c2(10,30,40);
}
