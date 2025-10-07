#include<stdio.h>
int i,j,k,temp;
void getArray(int a[2][2]){
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
}
void printArray(int a[2][2]){
	printf("\n===============\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\ta[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
void addArray(int a[2][2],int b[2][2],int c[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			temp=0;
			for(k=0;k<2;k++){
				temp+=a[i][k]*b[k][j];
			}
			c[i][j]=temp;
		}
	}
}
main(){
	int a[2][2],b[2][2],c[2][2];

	getArray(a);
	printArray(a);
	getArray(b);
	printArray(b);
	addArray(a,b,c);
	printArray(c);
		

}
