#include<iostream>
using namespace std;
class Maths{
	public:
		Maths(int r){
			cout<<"\n area of circle="<<(3.14*r*r);
		}
		~Maths(){
			cout<<"\n destructor method called";
		}
		Maths(int l, int b){
			cout<<"\n are of rect="<<l*b;
		}
};
main(){
	Maths m1(3);
	Maths m2(100,200);
}
