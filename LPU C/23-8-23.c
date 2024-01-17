#include<stdio.h>
int main (){
	int No1,No2,result,operation;
	printf("***Calcutater***\n");
	printf("+-/*%");
	printf("\n Enter 1-5 for choseing any operation \n ");
	scanf("%n",&operation);
	if (operation==1)
	printf("A+B is %d \n",(No1+No2));
	else if(operation==2)
	printf("A-B is %d \n",(No1-No2));
	else if (operation==3)
	printf("A/B is %d \n",(No1/No2));		
	else if (operation==4)
	printf("A*B is %d \n",(No1*No2));
	else (operation==5)
	printf("A%B is %d \n",(No1%No2));
	return 0;
	}
	