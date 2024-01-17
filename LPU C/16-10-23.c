#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("\n 1nd matrix \n \n");
	printf("Enter the row size. \n");
	scanf("%d",&r);
	printf("Enter the column size. \n");
	scanf("%d",&c);
	printf("\n 2nd matrix \n \n");
	int m1[r][c];
	printf("Enter the row size. \n");
	scanf("%d",&r);
	printf("Enter the column size. \n");
	scanf("%d",&c);
	printf("\n 1nd matrix \n \n");
	int m2[r][c];
	for (i=0;i<=r;i++){
		printf("_____________ \n");
		for (j=0;j<=c;j++){
			printf("//");
			scanf("%d",&m1[i][j]);
		}
		printf(" \n");
	}
	printf("\n 2nd matrix /n \n");
	for (i=0;i<=r;i++){
		printf("_____________ \n");
		for (j=0;j<=c;j++){
			printf("//");
			scanf("%d",&m2[i][j]);
		}
		printf(" \n");
	}
	
	printf("\n 3nd matrix \n \n");
	for (i=0;i<=r;i++){
		printf("\n_____________\n");
		for (j=0;j<=c;j++){
			printf("|");
			printf("%d",m1[i][j]+m2[i][j]);
			printf("|");
		}
	}
	printf("\n 4th matrix \n \n");
	for (i=0;i<=r;i++){
		printf("\n_____________\n");
		for (j=0;j<=c;j++){
			printf("|");
			printf("%d",m1[j][i]+m2[j][i]);
			printf("|");
		}
	}	
}