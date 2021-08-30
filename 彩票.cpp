#include<stdio.h>

int main()
{
    int a[34]={0},c[8]={0};
    int n,i,j,t=0,p,q;
    scanf("%d",&n);
    for(i=1;i<=7;i++)
    {
        scanf("%d",&p);
        a[p]=1;//1~33将相应中讲述标记
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=7;j++)
        {
            scanf("%d",&q);
            if(a[q]==1)
                t++;//统计对应中奖数
        }
        c[7-t+1]++;//根据中奖数判断中奖等级
        t=0;
    }
    for(i=1;i<=7;i++)
	{
		printf("%d ",c[i]);//输出中奖情况
	}
	return 0;
}
