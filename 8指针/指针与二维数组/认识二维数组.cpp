#include<stdio.h>
#define G "%d %d\n"
int main()
{
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	printf(G,a,*a);
	printf(G,a[0],*(a+0));
	printf(G,&a[0],&a[0][0]);
	printf(G,a[1],a+1);
	printf(G,&a[1][0],*(a+1)+0);
	printf(G,a[2],*(a+2));
	printf(G,&a[2],a+2);
	printf(G,a[1][0],*(*(a+1)+0));
	return 0;
}
