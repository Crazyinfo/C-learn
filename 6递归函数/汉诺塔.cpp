#include<stdio.h>
void move(char X,char Y)
{
	printf("%c¡ª¡ª>%c\n",X,Y);
}

void hanoi(int n,char A,char B,char C)
{
	if(n==1)
	    move(A,C);
	else
	{
		hanoi(n-1,A,C,B);
		move(A,C);
		hanoi(n-1,B,A,C);
	}
}

int main()
{
	int m;
	printf("input the number of disks:");
	scanf("%d",&m);
	printf("The step to move %d disks:\n",m);
	hanoi(m,'A','B','C');
	return 0;
}
