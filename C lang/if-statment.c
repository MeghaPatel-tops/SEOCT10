#include<stdio.h>
/*
if(condition){
	//block
}
*/
main(){
	//find square of number(only positive)
	int number,s;
	printf("\n Enter the value of number");
	scanf("%d",&number);
	
	if(number>0){
		s=number*number;
		printf("\n square of %d=%d",number,s);
	}
}
