#include<stdio.h>

int x=100;//global varible 
void add(int m,int n){//m and n formal parameter
	printf("\n add=%d",m+n);
}
void display(){
	x=200;
	printf("\n in display function x=%d",x);
}
main(){
	int a;//local varible
	printf("\n a=%d",a);
	display();
	add(100,300);
	//printf("\n m=%d",m);
	printf("\n in main function x=%d",x);

}
