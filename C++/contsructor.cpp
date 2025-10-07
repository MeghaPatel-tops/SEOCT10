#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		Maths(){
			cout<<"\n default con. called";
		}
		Maths(int x,int y){
			a=x;
			b=y;
		}
		Maths(Maths &m2){
			a= m2.a;
			b=m2.b;
		}
		void display(){
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
		}
};
main(){
	cout<<"\n Simple(Default) Constructor";
	Maths m1;
	m1.display();
	cout<<"\n Parameterized Constructor";
	Maths m2(12,34);
	m2.display();
	cout<<"";
	cout<<"\n Copy Constructor";
	Maths m3=m2;
	m3.display();
}
