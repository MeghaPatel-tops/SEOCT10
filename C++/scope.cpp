#include<iostream>
//using namespace std;
class Test{
	public:
		void display();
};
void Test :: display(){
	std::cout<<"\n Method define outside";
}
main(){
	Test t1;
	t1.display();
}
