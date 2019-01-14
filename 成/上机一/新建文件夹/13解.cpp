#include<stdio.h>
int main()
{char c;
c=getchar();
while(c!='\n')
{if((c>='C'&&c<=92)||(c>='#'&&c<='<'))
c=c+30;
printf("%c",c);
c=getchar();
}
printf("\n");
return 0;
}
