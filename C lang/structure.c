#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	char email[20];
	float per;
};
main(){
	struct student s1 = {101,"gansh","ganesh@gmail.com",78.90};
	printf("\n enroll=%d",s1.enroll);
	printf("\n Name=%s",s1.name);
	printf("\n Email=%s",s1.email);
	printf("\n percentage=%f",s1.per);
	
}
