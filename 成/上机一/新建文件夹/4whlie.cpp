#include<stdio.h>
int main()
{int m=1,n,j=1,i=1,q=0;
printf("a integer:");
scanf("%d",&n);
{while(m<=n)
{while(i<=m)
{j=j*i;
i=i+1;}
q=q+j;
m=m+1;
}
}
printf("%d",q);
return 0;
}
