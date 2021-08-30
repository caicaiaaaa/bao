/*每一个数与前面的数比较大小，大则加一*/
#include<stdio.h>
int main()
{
    int n = 0,i,sum = 0;
    int a[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)//每一个数
    {
        for(int j = 1;j<=i;j++)//每个数与它前面的数比较
        {
            if(a[j]<a[i])
                sum++;
        }
        printf("%d ",sum);//输出比较结果
        sum = 0;
    }
    return 0;
}
