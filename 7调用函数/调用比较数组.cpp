#include<stdio.h>
int main()
{
	int large(int x,int y);
	int a[10],b[10],i,n=0,m=0,k=0;
	printf("enter array a:\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n");
	printf("enter arrray b:\n");
	for(i=0;i<10;i++)
	{
		if (large(a[i],b[i])==1) n=n+1;
		else if (large(a[i],b[i])==0) m=m+1;
		 else k=k+1;
	}
	printf("a[i]>b[i]%d times\na[i]=b[i]%d times\na[i]<b[i]%d times\n",n,m,k);
	if(n>k) printf("array a is larger than array b\n");
	 else if(n<k) printf("array a is smaller than array b\n");
	  else printf("array a is equal to array b b\n");
	return 0;
}

int large(int x,int y)
{
	int flag;
	if(x>y) flag=1;
	 else if(x<y) flag=-1;
	  else flag=0;
	return flag;
}
