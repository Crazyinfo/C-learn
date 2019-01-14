#include<stdio.h>
void draw(int x, int y)//编写draw函数，参数为左边的警察及犯人数量。函数功能是打印出当前情况下左岸和右岸各有多少警察及犯人。
{
    int i;int n;
	for(i=0;i<x;i++) 
	  printf("A   ");
	for(i=0;i<3-x;i++) 
	  printf("    ");
	printf("|        |   ");
	for(i=0;i<3-x;i++) 
	  printf("A   ");
	for(n=1;n<=4;n++) 
	  printf("\n            |        |");
	printf("\n");
	for(i=0;i<y;i++) 
	  printf("B   ");
	for(i=0;i<3-y;i++) 
	  printf("    ");
	printf("|        |   ");
	for(i=0;i<3-y;i++) 
	  printf("B   ");
	printf("\n");
}
int main()
{
    int i;
    int leap=1;
    int n=1;
    int a_left = 3;
    int b_left = 3;
    int a_right = 0;
    int b_right = 0;
    int a_right_move,b_right_move,a_left_move,b_left_move;
    draw(3, 3);
//循环体
    while(leap==1)
    {      
       printf("input the right move number of A & B:");
	   scanf("%d %d",&a_right_move,&b_right_move);//提示输入右移的警察与犯人数量
	   if(a_right_move>2||b_right_move>2||(a_right_move==0&&b_right_move==0)) continue;
	   a_left=a_left-a_right_move;
	   b_left=b_left-b_right_move;
	   a_right=a_right+a_right_move;
	   b_right=b_right+b_right_move;
	   draw(a_left,b_left);
	   if((a_left<b_left||a_right<b_right)&&a_left!=0&&a_right!=0)
	      {printf("GAVE OVER!!!");leap=0;
		  }
	   else if(a_left==0&&b_left==0) 
	      {
		  printf("YOU WIN!!!");leap=0;
		  }
	   else 
	      {
		    while(n==1)
	           {
			    printf("input the left move number of A & B:");
	            scanf("%d %d",&a_left_move,&b_left_move);//提示输入左移的警察与犯人数量
	            if(a_left_move<=2&&b_left_move<=2&&(a_left_move!=0||b_left_move!=0)) break;
			   }
	        a_left=a_left+a_left_move;b_left=b_left+b_left_move;
	        a_right=a_right-a_left_move;b_right=b_right-b_left_move;
	        draw(a_left,b_left);
	        if((a_left<b_left||a_right<b_right)&&a_left!=0&&a_right!=0)
			{
			printf("GAVE OVER!!!");leap=0;
			}
	        else if(a_left==0&&b_left==0);
			{
	        printf("YOU WIN!!!");leap=0;
			}
	      }
    }
    return 0;
}
