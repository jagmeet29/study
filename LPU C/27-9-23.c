#include<stdio.h>
int main(){
	int marks[5],sum;
	printf("Enter your marks one by one:");
	for(int i=0;i<5;i++){
		scanf("%d",&marks[i]);
		(i!=4)? printf("\t"):0;
	}
	for(int i=0;i<5;i++){
		sum=sum+marks[i];
		}
	printf("sum: \n%d",sum);
	printf("average: %f",(float)sum/5);
	return 0;
}