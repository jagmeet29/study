#include<stdio.h>
int main(){
	int price;
	printf("Enter the price of the product");
	scanf("%d",&price);
	if (price<20000){
	printf("You are eligible for 5 discout. Your final price is %d",(price-(price*5/100)));
}
	else{
	printf("You are eligible for 10 discout. Your final price is %d",(price-(price*10/100)));
}
}