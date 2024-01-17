#include<stdio.h>
int prime(int num);
int main ()
{
	int no;
	char result;
	printf("Enter a no.");
	scanf("%d",&no);
	result= prime(no);
	if ()
	printf("%s the no. is prime",result);
	return 0;
}
int prime(int num){

	for(int i=2;i<=(num/2);i++){
		if (num%i==0) return 0;;
	}
return 1;
}
	