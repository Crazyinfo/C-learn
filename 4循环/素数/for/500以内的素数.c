#include<stdio.h> 
#include<math.h>
int main ()
{int m,i,k; 
for(m=1;m<=500;m++) 
{
k=sqrt(m);
for(i=2;i<=k;i++)                      
  {if (m%i==0)break;}                    
if (i>=k+1)
  printf("%d ",m);
}
return 0;                       
}
//�ж�n�Ƿ��ܱ�2~��n���������
