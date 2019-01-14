#include<stdio.h>
int main()
{char c;
c=getchar();
while(c!='\n')
{
if(c>='a'&&c<='z') c=c-70;
if(c>='A'&&c<='Z') c=c-64;
}
printf("%c",c);
return 0;
}
