#include<stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n enter number");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		//printf("%d",rem);
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n rev=%d",rev);
}
