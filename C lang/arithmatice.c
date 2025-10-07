#include<stdio.h>
main(){
	int a,b ,ans,x=10,y;
	printf("\n Enter the value of a and b");
	scanf("%d %d",&a,&b);
	ans= a+b;
	printf("\n addition of %d and %d = %d",a,b,ans);
	ans=a%b;
	printf("\n rem=%d",ans);
	y=--x;//pre increment
	printf("\n y=%d x=%d",y,x);
}
