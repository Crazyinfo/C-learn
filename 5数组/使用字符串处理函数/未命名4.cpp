#include<stdio.h>
#include<string.h>
int main()
{
	char str1[5];
	char str2[]={"China"};
	strcpy(str1,str2);   //���ƣ�ͬʱӦ��֤str1�㹻�� 
	printf("%s\n",str1);
	return 0;
	
}
