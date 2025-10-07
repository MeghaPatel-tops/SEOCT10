#include<stdio.h>
/*
if(condition){
   //block
}
else{
	//block
}
*/
main(){
	//find even or odd
	int number;
	printf("\n Enter the value of number");
	scanf("%d",&number);
	if(number%2==0){
		printf("\n %d id Even",number);
	}
	else{
		printf("\n %d id Odd",number);
	}
}
