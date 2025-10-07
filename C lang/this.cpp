#include<iostream>
#include<string.h>
using namespace std;
class User{
	public:
		char name[20];
		char email[20];
		User(char name[20],email[20]){
			//this->name=name;
			strcpy(name,this->name);
			//this->email=email;
			strcpy(email,this->email);
		}
		void print(){
			cout<<"\n name="<<name;
			cout<<"\n email="<<email;
		}
};
main(){
	User u1("sneha","s@gmail.com");
	u1.print();
	User u2("arbas","a@gmail.com");
	u2.print();
}
