#include<stdio.h>
int main()
{
	int cocks,hens,chicks;
	for(cocks=1;cocks<=9;cocks++)
	{
		for(hens=1;hens<=33;hens++)
		{
			chicks=100-cocks-hens;
			if(5*cocks+hens*3+chicks/3==100)
			    printf("%d %d %d\n",cocks,hens,chicks);
		}
	}
	return 0;
}
