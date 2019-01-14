/***************************************
File name:    test7
last update:  2017.12.03 
function:     台阶
author:       yewei
****************************************/
#include<stdio.h>
int JumpFloor(int target)
 {
	if(target==1)
	 {
		return 1; 
		}
	if(target==2)
	 { 	return 2; 
	    } 		
	return JumpFloor(target-1)+JumpFloor(target-2); 
	}
	
int main()
{   int n;
    printf("请输入一共需要跳多少层台阶："); 
	scanf("%d",&n);
	JumpFloor(n); 
	printf("一共需要跳%d次",JumpFloor(n));
	return 0;
}
