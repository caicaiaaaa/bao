#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,n,all=0;
    int a[1000][5],sum[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i][0]);//语文
        scanf("%d",&a[i][1]);//数学
        scanf("%d",&a[i][2]);//英语
        sum[i]=a[i][0]+a[i][1]+a[i][2];//总分
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(fabs(a[i][0]-a[j][0])<=5&&fabs(a[i][1]-a[j][1])<=5&&fabs(a[i][2]-a[j][2])<=5&&fabs(sum[i]-sum[j])<=10)//根据题目要求判断
               all++;
        }
    }
    printf("%d",all);

    return 0;
}
