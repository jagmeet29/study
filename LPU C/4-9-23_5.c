#include<stdio.h>
int main(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
		for(int j=1;j<=5;j++){
			printf("%d,%d",i,j);
			printf("\n");
		}
	}
		return 0;}