#include<stdio.h>
int main()
{
    int s1,s2,s3;
    int a[16000];
    int i,j,k,t,l,max=-1;
    scanf("%d%d%d",&s1,&s2,&s3);
    for(i=1;i<=s1;i++)
        for(j=1;j<=s2;j++)
            for(k=1;k<=s3;k++)
            {
                t=i+j+k;
                a[t]++;//每一组组合结果用数组统计
            }
    for(i=s1*s2*s3-1;i>=3;i--)
    {
        if(a[i]>=max)
        {
            max=a[i];//找出出现次数最多的一组
            l=i;
        }
    }
    printf("%d",l);
    return 0;
}
