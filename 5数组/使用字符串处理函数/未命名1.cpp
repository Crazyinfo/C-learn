#include<stdio.h>
int main()
{   char c[10];
	gets(c);                                  //char c[10]={"China"};
	printf("%o\n",c);                         //scanf("%s",c)
	printf("%s\n",c);
	puts(c);
	return 0;
 } 
