#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]={"People"};
	char str2[]={" is friendly"};
	printf("%s\n",strcat(str1,str2));//将两个数组合并 
	printf("%d",strlen(str1));//strlen表示计算长度 
	return 0;
	
}
