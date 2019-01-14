#include<stdio.h>
void main()
{
	void search(float (*p)[4],int n);
	float score[3][4]={{57,67,70,60},{80,87,90,81},{90,99,100,98}};
	search(score,3);
}
void search(float (*p)[4],int n)
{
	int i,j,a;
	float m;
	for(i=0;i<n;i++)
	{ int k=1;  
	  for(j=0;j<4;j++)
	      {m=*(*(p+i)+i);
	      if (m<60) k=0;
		  }
	  if(k==0) 
	  {for(a=0;a<4;a++)
	  printf("%f ",*(*(p+i)+a));
	  }
	}
}
