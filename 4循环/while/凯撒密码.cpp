#include<stdio.h>
#include<stdio.h>
int main()
{
	char c;
	while((c=getchar())!='\n')
	/*先输入数据，之后getchar()的返回值一个接一个赋给c, 
	然后比较c是不是不等于'回车键，如果不等于回车键就会执行循环。如果等于就会结束。*/
	{if((c>='a')&&(c<='z'))
	{c=c+4;
	if(c>'z')
	c=c-26;
	}
	{if((c>='A')&&(c<='Z'))
	{c=c+4;
	if(c>'Z')
	c=c-26;
	}} 
	printf("%c",c);
	}
 } 
