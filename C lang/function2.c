#include<stdio.h>
//without return  without parameter
void printHello(){
	printf("\n hello");
}
//without return  with parameter
void add(int a,int b){
	int c=a+b;
	printf("\n addition=%d",c);
}
//with return  with parameter
int squareFind(int num){
	return num*num;
}
//with return  without parameter
float areaOfCircle(){
	int r;
	printf("\n Enter r");
	scanf("%d",&r);
	return(3.14*r*r);
}
main(){
	printHello();
	add(100,88);
	printf("\n aq of 10=%d",squareFind(10));
	printf("\n are of circl=%f",areaOfCircle());
}
