#include<iostream>
//using namespace std;
class Test{
	public:
		inline void display(){
				std::cout<<"\n Method define outside";
      }
};

main(){
	Test t[3];
	int i;
	for(i=1;i<=3;i++){
		t[i].display();
	}
	
}
