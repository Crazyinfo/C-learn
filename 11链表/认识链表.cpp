#include<stdio.h>

//定义一个链表节点的数据类型
struct Node
{
	int date;
	struct Node *pNext;
 };
 
int main()
{
	struct Node *pHead;//pHead用来存放链表头结点的地址
	
	pHead=CreateList();//建立一个链表
	TraverseList(pHead);
	
	return 0;
}
