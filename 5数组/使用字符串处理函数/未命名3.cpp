#include<stdio.h>
#include<string.h>
int main()
{
	char str1[4];
	char str2[]={"China"};
	strncpy(str1,str2,2);//2��ʾ���Ƶĳ��� 
	printf("%s\n",str1);
	return 0;
	
}
