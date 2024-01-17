#include<stdio.h>
int mul(int *a,int *b);
int div(int *a,int *b);
int main(){
	int num1,num2;
	printf("Enter numbers");
	scanf("%d ,%d",num1,num2);
	printf("%d",mul(&num1,&num2));
	printf("%d",div(&num1,&num2));
	return 0;
}
mul(int *a, int*b){
	return (*a)*(*b);
}
div(int *a,int *b){
	return (*a)/(*b);
}