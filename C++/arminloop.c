#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0,i;
    int result = 0.0;
    
    for(i=10;i<=200;i++){
    	result = 0;
    	num=i;
    	 originalNum = num;
    	

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
	
    originalNum = num;

    // Calculate the sum of nth powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    
    }
    printf("\n result=%d num==%d",result,num);

    if (result == num)
    
        printf("\n %d is an Armstrong number.\n", num);
    
      }
   
    return 0;

}

