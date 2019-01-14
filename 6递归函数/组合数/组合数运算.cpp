#include<stdio.h>
long fac(int n)
{
	long f;
	int i;
	for(i=1;i<=n;i++)
	    f=f*i; 
	return f;
 } 
 
long Cmn(int m,int n)
{
	long f=1;
	f=fac(n)/(fac(m)*fac(n-m));
	return f;
}

int main()
{
	int m,n;
	long y;
	printf("m="); 
	scanf("%d",&m);
	printf("n="); 
	scanf("%d",&n);
	y=Cmn(m,n);
	printf("Cmn=%15d\n",y);
	return 0;
}
