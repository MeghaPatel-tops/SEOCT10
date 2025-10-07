#include<stdio.h>
//returntype functionname(pa1,pa2){
//	//block
//}
int factFind(int num){
	if(num==1){
		return 1;
	}
	int f= num*factFind(num-1);//f(5)  =>5* f(4) =>5*4*f(3)
	return f;
}
main(){
   int ans=factFind(5);
   printf("\n ans=%d",ans);
}
