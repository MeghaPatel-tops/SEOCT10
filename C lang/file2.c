#include<stdio.h>
main(){
	FILE *fp;
	char data[10],ch;
	fp= fopen("hello.txt","w");
	//=========string write===========
	//fputs("hello world",fp);
	
	//=========char write=============
	fputc('M',fp);
	fclose(fp);

    fp=fopen("hello.txt","r");
//    fgets(data,20,fp);
//	printf("\n data=%c",data);



	    ch = getc(fp);
	    printf("\n ch=%c",ch);
	    fclose(fp);
		
	
}
