#include<stdio.h>
struct Student
{
	int num;
	char name[20];
	float score;
};
int main()
{
	struct Student stu[3]={{10101,"Zhang",78},{10103,"Wang",98},{10106,"Li",86}};
	struct Student temp;
	const int n=3;//常变量，在程序运行期间它的值不可变；相当于#define N 5 
	int i,j,k;
	printf("The order is:\n");
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(stu[j].score>stu[k].score)
			  k=j;
		}
		temp=stu[k];stu[k]=stu[i];stu[i]=temp;
	}
	for(i=0;i<3;i++)
	  printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	printf("\n");
	return 0;
 } 
