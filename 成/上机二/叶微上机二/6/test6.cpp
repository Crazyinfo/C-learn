/***************************************
File name:    test6
last update:  2017.12.03 
function:     YES or NO 
author:       yewei 
****************************************/
#include <stdio.h>
int Sum(int m,int n){
    int result;
    if(n==0)return 0;
    else if(m<n)return m;
    else result=n+Sum(m-n,n-1);
    return result;
}

int main() {
    int sum,t;
    printf("请输入一个总数值:\n");
    scanf("%d",&sum);
    t=Sum(sum,9);
    printf("数组中有无任意数之和等于%d: \n",sum);
    if (t==sum)printf("YES");
    else printf("NO");
    return 0;
}

