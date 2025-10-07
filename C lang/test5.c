#include<stdio.h>
int i,j;
void getArray(int array[3][3],int row,int col){
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\n enter array[%d][%d]",i,j);
			scanf("%d",&array[i][j]);
		}
	}
}
void printArray(int array[3][3],int row,int col){
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}
}
main(){
	int a[3][3];
	getArray(a,3,3);
	printArray(a,3,3);
}
