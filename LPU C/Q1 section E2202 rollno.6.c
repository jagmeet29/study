#include<stdio.h>
#include<math.h>
int main(){
	int Binary=0,binary_value=0,j=0,dec_value=0;
	printf("Enter the 4 bit binary no.");                  // Geting the Binary value from user
	scanf("%d",&Binary);                                  // from user
	
	while(j<=3)                                         // loop started
	{                                                  // j represents the desimal place
	binary_value=Binary%10;                           // getting the binary value of desimal place j
	dec_value+=binary_value*pow(2,j);                // {(multiply the binary value of desimal place j with 2 rase to power j) and adding dec_value with it} store everything in dec_value 
	Binary/=10;                                     // removing the desimal place from binary no.
    j++;
	}
	
	printf("%d",dec_value);                    // printing the result 
	return 0;
	}