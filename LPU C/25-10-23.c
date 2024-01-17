#include<stdio.h>
void main (){
	int var;
	float a = 1.05;
	var =10;
	int *p1,*p2=0,*p3=&var;
	void *p4;
	p4=(float)a; 
	printf("%d",*p1);
	printf("%d",*p2);
	printf("%d",*p3);
	printf("%d",*p4);
}