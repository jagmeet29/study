#include<stdio.h>
int main(){
	int num,reminder,reverse;
    printf("Enter a 2 digit no.");
    scanf("%d",&num);
	while(num!=0){
		reminder=num%10;
		reverse=reverse*10+reminder;
		num/=10;
	}
	(1)? printf("pen"):printf("not pen");
	return 0;
}