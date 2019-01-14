#include<stdio.h>
int main()
{
	int i,t,c;
	scanf("%d",&c);
	t=1;
	i=2;
	while(i<=c)
	{
		t=t*i; 
		i=i+1;
	}
	printf("%d\n",t);
	return 0;
}
