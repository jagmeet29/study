#include <stdio.h>
int main() 
{
    int decimalNumber,index = 0,temp;
    char hexNumber[50];

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    while (decimalNumber != 0) 
	{
         temp = decimalNumber % 16;         
        if (temp < 10) 
		{
            hexNumber[index++] = temp + '0';
        } 
		else
	    {
            hexNumber[index++] = temp + 'A' - 10;
        }
        decimalNumber /= 16;
    }

    
    printf("Hexadecimal equivalent: ");
    
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", hexNumber[i]);
    }
    
    printf("\n");

    return 0;
}