#include<stdio.h>
main()
{
	int a[5],i,min,max=0;
	for(i=0;i<5;i++){
	printf("\nEnter the number:a[%d] ",i);
	scanf("%d",&a[i]);
	}
	
	min=a[0];
	for(i=0;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}		
	}
	printf("\nEnter the minimum number:%d max=%d",min,max);

	
}
