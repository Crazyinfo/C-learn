#include<stdio.h>
int main()
{int m,n,i;
char c;
c='$';
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(m=1;m<=i;m++)
{printf("%c",c);
}
printf("\n");
}
return 0;
}
