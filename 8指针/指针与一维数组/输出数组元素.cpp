 #include<stdio.h>
int main(){
	int *p,i,a[10];
	p=a;
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);  //scanf("%d",(p+i));�����ڸ�ѭ�������½�ָ�����pָ��a[0] 
	printf("\n");
    for(i=0;i<10;i++,p++)  //for(i=0;i<10;i++)
	  printf("%d",*p);     //printf("%d",*p++);  �ɸ�д��������*p++��*��p++���൱����ʵ��*p�����㣬��ʵ��p����1�� 
	return 0;              //��*��++p����ָp�ȼ�1��ȡ*p�� 
}                          //++��*p����ʾp��ָ���Ԫ�ؼ�1 
