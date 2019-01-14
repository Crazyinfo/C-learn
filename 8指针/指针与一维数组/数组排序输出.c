#include<stdio.h>
void sort(int *x,int n)
{
	int i,k,p,temp;
	for(i=0;i<n;i++)
	  {for(k=0;k<n-i;k++)
	    {if(*(x+k)<*(x+k+1))
	       {temp=*(x+k);
	        *(x+k)=*(x+k+1);
	        *(x+1+k)=temp;
		   }
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
