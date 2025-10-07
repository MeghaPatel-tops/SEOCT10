#include<stdio.h>
union student{
	int enroll;
	char name[20];
	char email[20];
	float per;
};
main(){
	union student s1 ;
	scanf("%d %s",&s1.enroll,s1.name);
	printf("\n enroll=%d",s1.enroll);
	printf("\n Name=%s",s1.name);
	printf("\n Email=%s",s1.email);
	printf("\n percentage=%f",s1.per);
	
}
