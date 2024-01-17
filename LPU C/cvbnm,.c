#include<stdio.h>
int main(){
	int num[5],max=0;
	for(int i=0;i<5;i++){
	printf("Enter student %d num \n",i);
	scanf(" %d",&num[i]);
	}
	for(int i=0;i<5;i++){
	if (num[i]>max) max=num[i];
    }
    printf("max: %d",max);
    return 0;
	}
	
