#include<stdio.h>
int main(){
	int num=1,fact=1,i=1;
	printf("Enter a number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	printf("!%d=%d",num,fact);
}