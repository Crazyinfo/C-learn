#include<stdio.h> 
int main() 
{char s[]={"012xy"};int i,n=0; 
for(i=0;s[i]!='\0';i++) //��ͬ��for(i=0;s[i]!=0;i++)����Ϊ������Ϊ�ַ������飬����0 
if(s[i]>='a'&&s[i]<='z') n++; //�ж��Ƿ���Ӣ����ĸ 
printf("%d\n",n); 
return 0;
} 
