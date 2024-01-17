#include<stdio.h>
void main(){
	int no;
	printf("Enter a no.b/w 0 to 6");
	scanf("%d",&no);
	switch(no){
		case 0:
			printf("Sun");
			break;
		case 1:
			printf("Mon");
			break;
		case 2:
			printf("Tus");
			break;
		case 3:
			printf("Wen");
			break;
		case 4:
			printf("Thu");
			break;
		case 5:
			printf("Fri");
			break;
		case 6:
			printf("Sat");
			break;
		default:
			printf("Invalid input");
			break;
			
	}
}