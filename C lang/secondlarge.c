#include<stdio.h>
main()
{
	int a[5],i,j,min,max=0,temp;
	for(i=0;i<5;i++){
	printf("\nEnter the number:a[%d] ",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<5;i++){
	  printf("\n a[%d]=%d",i,a[i]);	
	}
	
	printf("\n secobnd laargest=%d",a[1]);
	


	
}
