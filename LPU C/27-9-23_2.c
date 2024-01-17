#include<stdio.h>
int main(){
	int age[5];
	char name[20][20];
	for(int i=0;i<5;i++){
	printf("Enter student %d name\n",i);
	scanf(" %s",&name[i]);
	printf("Enter student %d age\n",i);
	scanf(" %d",&age[i]);
	}
	for(int i=0;i<5;i++){
	printf("STUDENT DETAILS:\n");
	printf("Name= %s \n",name[i]);
	printf("Age= %d\n",age[i]);
    printf("-----------------------\n");
    }
	}
