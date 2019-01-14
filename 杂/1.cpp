#include<stdio.h>
main()
{ char a[20]="How are you?";
  char b[20];
  scanf("%s",b);printf("%s %s\n",a,b);  //用scanf函数输入字符串时，字符串中不能含有空格，否则将以空格作为串的结束符。
}

