#include<stdio.h>
main(){
	int x=10;
	const float pi=3.14;
	
	printf("\n x=%d",x);
	x=100;
	printf("\n x=%d",x);
	printf("\n pi=%f",pi);
	pi=2.7;
}
