#include<stdio.h>
#include<string.h>
int main()
{
	char a[]={"China"};
	char b[10]={"China"};
	int c[8]={1,4,5,6};
	int d[]={1,4,5,6};
	printf("%d %d\n",strlen(a),sizeof(a));
	printf("%d %d\n",strlen(b),sizeof(b));
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(d));
	char r[5];
	scanf("%s",r);    //可以用输入语句把字符串整体输入给字符数组
	printf("%s",r);
	return 0;
 } 
