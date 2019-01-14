#include<stdio.h>
int main()
{int a[2][3]={{1,2,3},{4,5,6}};
int max=0;int i,j;
for(i=0;i<2;i++)
{for(j=0;j<3;j++)
{if(max<a[i][j]) max=a[i][j];
}
}
printf("max is %d",max);
return 0;
}
