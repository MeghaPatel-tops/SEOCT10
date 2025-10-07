#include<stdio.h>
/*
switch(choice){
	case 1:
	//block
	break;
	case 2:
		//block
	break
	default	
}

*/
main(){
	int choice, r,l,b,areaReact;
	float pi=3.14, areaCircle;
	printf("\n press 1 for area of circle");
	printf("\n press 2 for area of react");
	
	printf("\n enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n enter radius");
			scanf("%d",&r);
			areaCircle=pi*r*r;
			printf("\n Area of circle=%f",areaCircle);
		break;
		case 2:
			printf("\n enter l and b");
			scanf("%d %d",&l,&b);
			areaReact =l*b;
			printf("\n area of reactngle=%d",areaReact);
		break;
		default:
			printf("\n Wrong choice");	
	}
}
