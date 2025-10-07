#include<stdio.h>
main(){
	FILE *fp;
	char username[20],ch;
	char email[20],data[100];
	int contact,i;
	
	fp= fopen("User.csv","a");

//	
//	for(i=1;i<=3;i++){
//		printf("\n Enter username email and contact");
//		scanf("%s %s %d",username,email,&contact);
//		fprintf(fp,"%s,%s,%d\n",username,email,contact);
//	
//	}
//	fclose(fp);

    fp=fopen("User.csv","r");
    printf("\n Username \tEmail \tconatct\n");
    
    while((ch=getc(fp))!=EOF){
    	if(ch==','){
    		printf("\t");
    		continue;
		}
    	printf("%c",ch);
	}
    fclose(fp);
	
	
}
