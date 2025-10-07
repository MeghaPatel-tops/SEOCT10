#include<stdio.h>
main(){
	int a,num;
	printf("\n size of int=%d",sizeof(int));
	
	printf("\n Enter num");
	scanf("%d",&num);
	//?:
	
	//(condition)?true:false;
	//leap year = (year%4==0 && year%100==0  )||year%400==0
	
	(num>0)?printf("\n positive"):printf("\n negative");
}
