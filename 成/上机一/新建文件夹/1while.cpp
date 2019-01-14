#include<stdio.h>
int main()
{
	int cocks=1,hens,chicks;
	while(cocks<=19)
	{
		hens=1;
		while(hens<=33)
		{
			chicks=100-cocks-hens;
			if(5*cocks+3*hens+chicks/3==100)
			    printf("%d %d %d\n",cocks,hens,chicks);
			hens++;
		}
		cocks++;
	}
	return 0;
}

