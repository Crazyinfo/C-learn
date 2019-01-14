#include<stdio.h>
void sort(int *x,int n)
{
int i,j,k,temp;
for(i=0;i<n;i++)
	{k=i;
	for(j=i+1;j<n;j++)
	    {if(*(x+j)>*(x+k)) k=j;}
	if(k!=i)
		{temp=*(x+i);
	    *(x+i)=*(x+k);
	    *(x+k)=temp;
		}
	  }
}


int main()
{
	int a[5]={3,6,1,9,4};
	int i;
	sort(a,5);
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]); 
	}
	return 0;
}
