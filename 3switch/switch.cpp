#include<stdio.h>
int main()
{
	  char grade;
	  scanf("%c",&grade);
	  
	  switch(grade)
	  {
	  	case 'A':printf("85-100\n");break;
	  	case 'B':printf("70-84\n");break;
	  	case 'C':printf("60-70\n");break;    //break 不能丢，表示输出时中断到这里 
	  	case 'D':printf("<60\n");break;
	  }
        return 0;
}
