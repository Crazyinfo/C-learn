/***************************************
File name:    test7
last update:  2017.12.03 
function:     ̨��
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
    printf("������һ����Ҫ�����ٲ�̨�ף�"); 
	scanf("%d",&n);
	JumpFloor(n); 
	printf("һ����Ҫ��%d��",JumpFloor(n));
	return 0;
}
