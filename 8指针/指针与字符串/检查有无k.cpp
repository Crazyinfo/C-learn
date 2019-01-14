#include<stdio.h>
int main()
{
	char st[20],*ps;
	int k;
	printf("input a string:\n");
	*st=getchar();
	ps=st; 
	for(;*ps!='\0';ps++)
	{
		if(*ps=='k')
		  k=1;
		else continue;
	}
	if(k==0)
	  printf("There is no 'k' in this string\n");
	else
	  printf("This string has 'k'\n");
	return 0;
}
