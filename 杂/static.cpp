#include<stdio.h>
 int f(int n);
 main()
 { int a=3,s;
   s=f(a);
   printf("%d\n",s);
   s=s+f(a);
   printf("%d\n",s);
 }
 int f(int n)
 { static int a=1;             //static�ڱ����ʱ��ͷ���洢�ռ�һֱ������ִ����ǰ���ͷ�,Ҳ���ǲ��ͷſռ�
   n+=a++;                     //��ͬ��n=a+n;a++ 
   return n;
 }

