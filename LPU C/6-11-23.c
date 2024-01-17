#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char pass[10],cpass[10];
	int c=0;
	printf("Enter the password");
	gets(pass);
	printf("Enter conform password");
	gets(cpass);
	c=isspace(pass);
	c=isdigit(pass);
	
	if (strcmp(pass,cpass)){
		printf("invalid passowrd");
	}else{
		if (c==0){
	    printf("valid passowrd");	}
}
	
	return 0;
}