#include<stdio.h>
#include<math.h>
int main()
{double i,pai,m,n;
i=3;n=1;pai=4;
do
{
	m=pow((-1),n);
	pai=pai+m*(1/i)*4;
	i=i+2;n++;
}
while(i<=501);
printf("pai is %lf\n",pai);
return 0;
 } 
