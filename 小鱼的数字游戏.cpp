//输入一串数字，倒着输出
#include<stdio.h>
int main()
{
    int a[100];
    int i,n=0;

    for(i=0; ;i++)
    {
        scanf("%d",&a[i]);//输入数字
        if(a[i]==0)
            break;//以0结束
        n++;
    }
    for(i=n-1;i>=0;i--)//倒着输出
        printf("%d ",a[i]);
    return 0;
}
