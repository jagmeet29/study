#include<stdio.h>
void main (){
	int No1,No2,result,ope;
	printf("***Calcutater***\n");
	printf("+-/*%");
	printf("\n Enter 1-5 for choseing any operation \n ");
	scanf("%n",&ope);
	if(getchar() !='\n');
	{
	printf("Enter no. 1");
	scanf("%d",&No1);
	}
	printf("Enter no. 2");
	scanf("%d",&No2);	
	switch(ope){
		case 1:
			printf("A+B is %d \n",(No1+No2));
			break;
		case 2:
			printf("A-B is %d \n",(No1-No2));
			break;
		case 3:
			printf("A/B is %d \n",(No1/No2));
			break;
		case 4:
			printf("A*B is %d \n",(No1*No2));
			break;
		case 5:
			printf("A%B is %d \n",(No1%No2));
			break;
		default:
			printf("Invalid input");
			break;
		}
	}

	