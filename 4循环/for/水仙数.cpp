#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,i;
    for(i=100;i<=999;i++)
    {
	  z=i%10;//个位数 
      y=(i%100)/10;//十位数 
      x=i/100;//百位数 
	  if(i==pow(x,3)+pow(y,3)+pow(z,3))
	    printf("%d\n",i);
	}
	return 0; 
 } 
//水仙花数是指一个 n 位数（n≥3 ），它的每个位上的数字的 n 次幂之和等于它本身 
