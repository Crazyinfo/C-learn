#include<stdio.h>
#include<math.h>
#define DEBUG
int main()
{
	double sum,t;
	int fz,fm;
	sum=0;t=1;fz=1;fm=1;
	while(fabs(t)>1e-7){
		sum+=t;
		fz=(-1)*fz;
		fm+=2;
		t=fz/fm;
		#ifdef DEBUG
		    printf("�м����ݣ�%f\n",sum*4);
		#endif
	}
	sum=sum*4;
	printf("Բ����Ϊ��%.7f",sum);
	return 0; 
 } 
