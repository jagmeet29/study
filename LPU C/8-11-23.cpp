#include <stdio.h>
	struct student{
	char name[30];
	int ID;
	int sub[3];
	};
	student getinfo();
	int main (){
		struct student sp[3];
		for(int i=0;i<=2;i++){
		sp[i]=getinfo();
		printf("%s,%d,%d,%d,%d ",sp[i].name,sp[i].ID,sp[i].sub[0],sp[i].sub[1],sp[i].sub[2]);
		printf("Average=%d",((sp[i].sub[0]+sp[i].sub[1]+sp[i].sub[2])/3));}
		return 0;
	}
	student getinfo(){
		student s1;
	printf("\n Enter the name, ID, marks of 3 sub \n");
	scanf("%s",&s1.name);
	scanf("%d",&s1.ID);
	scanf("%d",&s1.sub[0]);	
		scanf("%d",&s1.sub[1]);	
			scanf("%d",&s1.sub[2]);	
			return s1;
	}
	
	
	
	
	
	
	
	
	
	
