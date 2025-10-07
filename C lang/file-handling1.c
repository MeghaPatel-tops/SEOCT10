#include<stdio.h>
main(){
	FILE *fp;
	char data[10];
//	fp= fopen("student.txt","w");
//	fprintf(fp,"%s","hello world");
//	fclose(fp);

    fp=fopen("student.txt","r");
    fscanf(fp,"%s",data);
    printf("\n data=%s",data);
    fclose(fp);
	
	
}
