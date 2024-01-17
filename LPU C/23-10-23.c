#include<stdio.h>
int main(){
	int a[5],*pa=a,now,no1,no2,sum,mul,div,fsum,*pfsum=&fsum,rev,*pno1=&no1,*pno2=&no2,fact=1,*pfact=&fact,*prev=&rev;
	printf("Enter the two numbers \n");
	scanf("%d,%d",pno1,pno2);
	sum=(*pno1)+(*pno2);
	mul=(*pno1)*(*pno2);
	div=(*pno1)/(*pno2);
	for(int i=1;i<=no1;i++){
		fact*=i;
	}
///	while(*pno2!=0){
///		now=(*pno2)%10;
///		*prev=*prev*10+now;
///		*pno2/10;
///	}
		for(int i=*pno1;i<=*pno2;i++){
		*pfsum+=i;
	}
	printf("the sum=%d div=%d mul=%d fact=%d ,fsum=%d rev=%d" ,sum,div,mul,*pfact,*pfsum,*prev);
	printf("\n Enter the content of array \n");
	for(int i=0;i<=5;i++){
		scanf("%d",pa+i);
	}
	printf("Array");
		for(int i=0;i<=5;i++){
	printf("%d \t",*(pa+i));
	
	}
	return 0;
}
