#include<stdio.h>
main(){
	int num;
	printf("\n Enter the num");
	scanf("%d",&num);
	if(num%2==0){
		goto Even;
	}
	else{
		goto Odd;
	}
	
	Even:{
		printf("\n Even number");
		return;
	}
	Odd:{
		printf("\n  odd number");
		return;
	}
	
}
