#include<stdio.h>
void string_copy(char *p1,char *p2)
{
	for(;*p1!='\0';p1++,p2++)
	  *p2=*p1;
	*p2='\0';
}

int main()
{
	char a[]="I am a girl",b[20];
	string_copy(a,b);
	printf("%s",b);
	return 0;
}
/*int main()
{
	char *q1,*q2;
	q1="I am a girl";
	string_copy(q1,q2);
	printf("%s",q2);
	return 0;
}                              这样也可以 */ 
