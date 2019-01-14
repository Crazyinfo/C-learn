/*炮弹一样的球状物体，能够堆积成一个金字塔，在顶端有一个炮弹，
它坐落在一个4个炮弹组成的层面上，而这4个炮弹又坐落在
一个9个炮弹组成的层面上，以此类推。写一个递归函数CannonBall，
这个函数把金字塔的高度作为参数，并且返回它所包括的炮弹数量。
函数必须按照递归方式实现，不可以使用迭代结构，例如while或for。*/ 
#include<stdio.h>
int CannonBall(int h){
	if(h==1)
	   return 1;
	if(h>1)
	   return CannonBall(h-1)+(2*h-1); 
}

int main(){
	int h,m;
	printf("请输入倒数第几层：");
	scanf("%d",&h);
	m=CannonBall(h);
	printf("该层有%d个球",m);
	return 0;
}
