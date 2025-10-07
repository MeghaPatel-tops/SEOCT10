#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];
	printf("\n enter the str");
	scanf("%s",str1);
	printf("\n str1=%s",str1);
	printf("\nlen of str = %d",strlen(str1));
	strcpy(str2,str1);
	printf("\n str2 %s",str2);
	printf("\n compare =%d",strcmp(str1,str2));
	printf("\n uppercase str2 %s",strupr(str2));
	printf("\n rev str2 %s",strrev(str2));

	
	
	
}
