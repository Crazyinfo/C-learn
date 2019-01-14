/***************************************
File name:    test1
last update:  2017.11.29
function:     ³£Ê¤½«¾ü 
author:       yewei
****************************************/
#include<stdio.h>
int main()
{
	int left,n,m;
	left=21;
	printf("* turn.Each one each time takes 1 to 4 sticks.The *\n");
	printf("* one who takes the last stick will lose the game. *\n");
	printf("*****************************************************\n");
	printf("  >> --------------Game Begin---------------\n");
	printf("How many stick do you wish to take<1~4>?");
	scanf("%d",&n);
	left=left-n;
	printf("  %d stick left in the pile.\n",left);
	do{
		printf("  Compute take 1 stick\n");
		left=left-1;
		printf("  %d stick left in the pile.\n",left);
		printf("How many stick do you wish to take<1~4>?");
		scanf("%d",&n);
		left=left-n;
		printf("  %d stick left in the pile.\n",left);
	}while(left>5);
	printf("  Compute take %d stick\n",left-1);
	m=left-1;
	left=left-m;
	printf("  %d stick left in the pile.\n",left);
	printf("How many stick do you wish to take<1~4>?");
	scanf("%d",&n);
	printf("  You have taken the last stick.\n");
	printf("  * * * You lose!\n");
	printf("  >> ---------Game Over!-----------\n");
	return 0;
}
