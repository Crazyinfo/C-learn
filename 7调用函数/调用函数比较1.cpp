#include<stdio.h>
int main()
{
	int f(int a,int b);
	int i=2,p;
	p=f(i,++i);
	printf("%d\n",p);
	return 0;
}
int f(int x,int y)
{
	int c;
	if(x>y) c=1;
	if(x==y) c=0;
	else c=-1;
	return c;
}
