#include<stdio.h>
#include<string.h>
int main()
{
	char str1[81],str2[81],str3[81],string[81];
	gets(str1);
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0)  //strcmp��ʾ�Ƚ���������Ĵ�С 
		strcpy(string,str1);//strcpy��ʾ���� 
	else 
	    strcpy(string,str2);
	if(strcmp(str3,string)>0)
	    strcpy(string,str3);
printf("\nThe largest string is:\n%s\n",string);
return 0;}
