#include<stdio.h>
int main()
{const int ROWS=0;
const int CHARS=4;
int row;
int line;
char ch;
ch='$';
for(row=4;row>=ROWS;row--)
{for(line=row;line<=CHARS;line++)
printf("%c",ch);
printf("\n");
}
return 0;
}
