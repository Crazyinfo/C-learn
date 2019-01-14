#include<stdio.h>
void copy_string(char *from,char *to)
{
	int i=0;
	while(from[i]!='\0')
	{
		to[i]=from[i];i++;
	}
	to[i]='\0';
}
int main()
{
	char a[]="I am a teacher";
	char b[]="You are a student";
	printf("%s,%s\n",a,b);
	copy_string(a,b);//»òcopy_string(&a[0],&b[0]);
	printf("%s,%s",a,b);
	return 0;
}
