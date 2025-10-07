#include<stdio.h>
/*
  if(cond1){
      if(cond2){
          //block
   		}
}

*/
main(){
	//prepare eligibilty criteria of admision
	//condition maths>=65 and phy>=55 and chem>=50
	//maths+phy+chem >=190 or maths+phy>=140
	int maths,phy,chem,total,subtotal;
	
	printf("\n Enter the marks of maths phy chem:");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths>=65 && phy>=55 && chem>=50){
		total = maths+phy+chem;
		subtotal=maths+phy;
		if(total>=190 || subtotal>=140){
			printf("\n Eligible for admistion");
		}
	}
	
}
