#include<stdio.h>
#include<string.h>
int main()
{
	char str1[5];
	char str2[]={"China"};
	strcpy(str1,str2);   //复制，同时应保证str1足够大 
	printf("%s\n",str1);
	return 0;
	
}
