#include<stdio.h>
#include<math.h>
main(){
      int num,power,rem,sum,ornum,i;
	  
	  for(i=10;i<=1000;i++){
	  	num=i;
	  	power=0;
	  	sum=0;
	  	 ornum=num;
	  while(ornum !=0){
	  	++power;
	  	ornum =ornum/10;
	  }	
	   ornum=num;
	  while(ornum !=0){
	  	rem = ornum%10;
	  	sum += pow(rem,power);
	  	ornum= ornum/10;
	  }
	  
	  (num==sum)?printf("\n %d yes",num):printf("");
	  }
	 
	  
	 
 
}
