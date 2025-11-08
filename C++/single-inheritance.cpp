#include<iostream>
using namespace std;
class Category{
	protected:
		int cid;
		char cname[20];
	public:	
		 void getCategory(){
			cout<<"\n Enter category id and name";
			cin>>cid>>cname;
		}
};
class Product : public Category{
	public:
		int pid;
		char pname[20];
		float price;
		void getProductDetails(){
			//getCategory();
			cout<<"\n Enter pid pname price";
			cin>>pid>>pname>>price;
		}
		void showProduct(){
			cout<<"\n cid"<<cid<<"\t cname"<<cname;
			cout<<"\n pid="<<pid<<"\t pname="<<pname;
			cout<<"\n price="<<price;
		}
};
main(){
	Product p1;
	p1.getCategory();
//	cout<<p1.cid;
	p1.getProductDetails();
	p1.showProduct();
}

