#include<stdio.h>
#include<stdio.h>
int main()
{
	char c;
	while((c=getchar())!='\n')
	/*���������ݣ�֮��getchar()�ķ���ֵһ����һ������c, 
	Ȼ��Ƚ�c�ǲ��ǲ�����'�س�������������ڻس����ͻ�ִ��ѭ����������ھͻ������*/
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
