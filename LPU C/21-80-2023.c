#include<stdio.h>
void main () {
	int year;
	printf("Enter Year");
	scanf("%d",&year);
	((year%4)==0)? printf("Year is a leep year"):printf("Year is not leep year");

}