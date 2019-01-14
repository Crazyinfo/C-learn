#include<stdio.h>
int main()
{
	char *p1,*p2,b[20];
	char a[20]="I am a girl";
	p1=a;p2=b;
	for(;*p1!='\0';p1++,p2++)
	    *p2=*p1;
	*p2='\0';
	printf("%s\n",a);
	printf("%s",b);
	return 0;
}
