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
 { static int a=1;             //static在编译的时候就分配存储空间一直到程序执行完前再释放,也就是不释放空间
   n+=a++;                     //等同于n=a+n;a++ 
   return n;
 }

