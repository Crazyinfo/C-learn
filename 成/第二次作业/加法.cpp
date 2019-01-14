#include<stdio.h>

int get(int *a,int *b) 
{
	scanf("%d %d",a,b);
}

int add(int a,int b)
{
	get(&a,&b);
	int m;
	m=a+b;
	printf("%d",m);
}
int main()
{
	int a,b;
    add(a,b);
 } 
