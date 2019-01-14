#include<stdio.h>
#define LETTER 1
  int main()
  {char str[20]="C Language",c;
  int i;
  i=0;
  while((c=str[i])!='\0') 
    {
    	i++;
		#if LETTER                //如常量表达式的值为真（非0），则对程序段1进行编译，否则对程序段2进行编译 
		     if(c>='a'&&c<='z')
			   c=c-32;
		#else
		     if(c>='A'&&c<='Z')
			   c=c+32;
		#endif
		printf("%c",c); 
    }
  return 0;
   } 
