#include<stdio.h>
  int main()
{
	int max(int x,int y);
	int a,b,c;
	scanf("%d%d",&a,&b);
    c=max(a,b);
	printf("%d",c);
	return 0;
 }
 int max(int x,int y)
 {
 	int z;
 	z=x>y ? x:y;
 	return (z);//return(x>y ? x:y) ;
  } 
//�����ú������ں���ʱ��Ӧ���������������������ϵġ�int max(int x,int y);���� 
//�����ú�������ǰ���ǣ�����Ҫ���ϵ������� ����Ҫ��ǰ��ӡ�int max(int x,int y);��
