#include<stdio.h>
void main(){
   int x=10,y;
   //y=x++;//post increment: first assign value and then increse
    y=++x;//pre increment: first increse value and then assign
   printf("\n x=%d y=%d",x,y);
}

