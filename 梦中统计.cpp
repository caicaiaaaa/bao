//十个数字出现次数用用数组统计

#include<stdio.h>

int main()
{
    int a,b;
    int c[10]={0};//数组初始化
    int i,k,n;

    scanf("%d %d",&a,&b);//输入数字范围
    for(i=a;i<=b;i++)
    {
        n=i;
        while(n!=0)
        {
            k=n%10;
            c[k]++;
            n=n/10;//统计每一位上的数字
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",c[i]);
    return 0;
}
