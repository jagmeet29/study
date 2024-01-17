#include<stdio.h>
int main(){
	int id,age;
	char nam;
		printf("\n Enter your ID");
	scanf("%d",&id);
    	printf("Enter your Name");
	scanf("%c",&nam);
		printf("\n Enter your age");
	scanf("%d",&age);
	if (age>=18) goto print;


print:
	printf("Your name is %c",nam);
	printf("Your ID is %i",id);
	
	return 0;
}