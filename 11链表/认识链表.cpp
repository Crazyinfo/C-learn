#include<stdio.h>

//����һ������ڵ����������
struct Node
{
	int date;
	struct Node *pNext;
 };
 
int main()
{
	struct Node *pHead;//pHead�����������ͷ���ĵ�ַ
	
	pHead=CreateList();//����һ������
	TraverseList(pHead);
	
	return 0;
}
