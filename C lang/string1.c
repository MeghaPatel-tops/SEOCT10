#include<stdio.h>
main(){
	char str[10]={'t','o','p','s','\0'};
	char name[20];
	printf("str=%s",str);
	printf("\n enter the name");
	//scanf("%s",name);
	gets(name);
	puts(name);
	//printf("\n name=%s",name);
}
