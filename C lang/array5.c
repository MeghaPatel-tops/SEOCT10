#include<stdio.h>
main(){
	//datatype array_name[size]
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			sum=sum+a[i];
		}
	}
	//sort
	
    for(i=0;i<5;i++){
    	printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n sum=%d",sum);
}
