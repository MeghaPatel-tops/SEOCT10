#include<iostream>
using namespace std;
int i,j;
template <typename T>
class Sortarray{
	public:
		T a[5],temp;
		Sortarray(){
			for(i=0;i<5;i++){
				cout<<"\n Enter array element of"<<i+1<<"= ";
				cin>>a[i];
			}
		}
		void sorting(){
			for(i=0;i<5;i++){
				for(j=i+1;j<5;j++){
					if(a[i]>a[j]){
						temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		void display(){
			for(i=0;i<5;i++){
				cout<<"\n a["<<i<<"]="<<a[i];
			}
		}
};
main(){
	Sortarray <int>s1;
	s1.sorting();
	s1.display();
	
	Sortarray <char>s2;
	s2.sorting();
	s2.display();
}`
