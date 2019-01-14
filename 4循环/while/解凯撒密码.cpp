#include<stdio.h>
int main()
{
	char c;
	while((c=getchar())!='\n')
	{  if((c>='a')&&(c<='z'))
	{    c=c+4;
	     if(c>'z')
	       c=c-26;
	}
	   if((c>='A')&&(c<='Z'))
	{    c=c+4;
	     if(c>'Z')
	       c=c-26;
	}
	   printf("%c",c);
	}
 } 
