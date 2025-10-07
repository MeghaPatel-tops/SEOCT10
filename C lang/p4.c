#include<stdio.h>
main(){
	int i,j,k;
	k='a';
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i;j++){
			printf("%c",k);
		
		}
			k++;
		printf("\n");
	}
}
