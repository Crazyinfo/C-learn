#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,i;
    for(i=100;i<=999;i++)
    {
	  z=i%10;//��λ�� 
      y=(i%100)/10;//ʮλ�� 
      x=i/100;//��λ�� 
	  if(i==pow(x,3)+pow(y,3)+pow(z,3))
	    printf("%d\n",i);
	}
	return 0; 
 } 
//ˮ�ɻ�����ָһ�� n λ����n��3 ��������ÿ��λ�ϵ����ֵ� n ����֮�͵��������� 
