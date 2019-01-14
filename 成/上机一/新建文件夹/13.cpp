#include<stdio.h>
int main()
{char c;
c=getchar();
while(c!='\n')
{if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
c=c-30;
printf("%c",c);
c=getchar();
}
printf("\n");
return 0;
}
