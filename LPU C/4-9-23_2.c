#include<stdio.h>
int main(){
	int num=1,first=0,second=1,next;
	printf("Enter a number");
	scanf("%d",&num);
	printf(" %d  %d ",first,second);
	for(int i=3;i<=num;i++){
		next=first+second;
		printf(" %d ",next);
		first=second;
		second=next;
	}
	return 0;
}
