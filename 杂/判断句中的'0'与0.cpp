#include<stdio.h> 
int main() 
{char s[]={"012xy"};int i,n=0; 
for(i=0;s[i]!='\0';i++) //等同于for(i=0;s[i]!=0;i++)，因为该数组为字符串数组，可用0 
if(s[i]>='a'&&s[i]<='z') n++; //判断是否是英文字母 
printf("%d\n",n); 
return 0;
} 
