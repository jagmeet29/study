#include<stdio.h>
int main(){

int a[8]={1,2,3,4,5,6,9,10};
int loc=-1,beg=0,last,key,mid;
printf("Enter the number to search \n");
scanf("%d",&key);
last=8-1;
while(beg<=last)
{
	mid=(beg+last)/2;
	
	if (a[mid]==key)
	{
	    loc=mid;
	    break;
	}
	
	if (a[mid]>key)
	{
		last=mid-1;
	}
	
	if(a[mid]<key)
	{
		beg=mid+1;
	}
	
}
if (loc!=-1) {printf("Element fount at %d",loc+1);}
return 0;
}