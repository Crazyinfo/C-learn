#include<stdio.h>
#define LETTER 1
  int main()
  {char str[20]="C Language",c;
  int i;
  i=0;
  while((c=str[i])!='\0') 
    {
    	i++;
		#if LETTER                //�糣�����ʽ��ֵΪ�棨��0������Գ����1���б��룬����Գ����2���б��� 
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
