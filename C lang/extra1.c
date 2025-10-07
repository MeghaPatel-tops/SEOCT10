#include<stdio.h>
/*
switch(choice){
	case 1:
	//block
	break;
	case 2:
	//block
	break;
	default:
	break
}
*/
main(){
	int a,b;
	char ch;
	printf("\n press + for add");
	printf("\n press - for sub");
	printf("\n press * for mul");
	printf("\n press / for div");
	printf("\n enter choice");
	scanf("%c",&ch);
	printf("\n Enter the value of a and b");
	scanf("%d %d",&a,&b);
	
	
	switch(ch){
		case '+':
			printf("\n add=%d",a+b);
		break;
		case '-':
			printf("\n sub=%d",a-b);
		break;
		case '*':
			printf("\n mul=%d",a*b);
		break;
		case '/':
			printf("\n div=%.2f",(float)a/b);
		break;	
		default:
			printf("\n Wrong choice");
		break;		
	}
	
   
}

 
