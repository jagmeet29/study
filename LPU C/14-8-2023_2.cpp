#include<stdio.h>
int main () {
	char name[]="Jagmeet Singh";
	int sub_[]={88,92,87,98,99};
	char grade='O';
	float persentage=((sub_[0]+sub_[1]+sub_[2]+sub_[3]+sub_[4])*100)/500;
	printf("I am %s my persentage is %f and grade %c",name,persentage,grade);
	return 0;
}