#include<stdio.h>
void printHello();
void add(int,int);
main(){
	int sq;
	printHello();
	add(12,34);
	sq=squareFind(5);
	printf("\n sq=%d",sq);
}
void printHello(){
	printf("\n hello");
}
void add(int a,int b){
	int c=a+b;
	printf("\n addition=%d",c);
}
int squareFind(int num){
	return num*num;
}
