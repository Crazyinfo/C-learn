 #include<stdio.h>
 #define f(x) x*x*x
 main()
 { int a=3,s,t;
   s=f(a+1);t=f((a+1));
   printf("%d,%d\n",s,t);
 }

