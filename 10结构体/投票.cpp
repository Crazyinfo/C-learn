#include<stdio.h>
#include<string.h>
struct Person
{
	char name[20];
	int count;
}leader[3]={{"L",0},{"Z",0},{"S",0}};
int main()
{
	int i,j;
	char leader_name[20];
	for(i=1;i<=10;i++)
	{
		scanf("%s",leader_name);
		for(j=0;j<3;j++)
		{
			if(strcmp(leader_name,leader[j].name)==0) leader[j].count++;
		}
	}
	printf("\nResult:\n");
	for(i=0;i<3;i++)
	  printf("%5s:%d\n",leader[i].name,leader[i].count);
	  return 0;
}
