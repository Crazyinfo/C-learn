#include<stdio.h>
int main()
{
	char a[30]="Beijing",b[10]="China";
	char *p1,*p2;
	for(p1=a;*p1!='\0';p1++);
	for(p2=b;*p2!='\0';)
	   *(p1++)=*(p2++);
	p1='\0';
	printf("%s",a);//��b�е��ַ�������ճ����a�� 
}
