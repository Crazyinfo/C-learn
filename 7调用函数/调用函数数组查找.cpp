#include<stdio.h>
int getindex(int arr[5],int value)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(arr[i]==value)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[5]={22,12,19,38,17};
	int value=38;
	int index=getindex(arr,value);
	if(index!=-1)
	{
		printf("%d在数组中存在，下标为：%d\n",value,index);
	}
	else
	{
		printf("%d在数组中不存在\n",value);
	}
	return 0;
}
