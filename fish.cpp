/*ÿһ������ǰ������Ƚϴ�С�������һ*/
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
    for(i=1;i<=n;i++)//ÿһ����
    {
        for(int j = 1;j<=i;j++)//ÿ��������ǰ������Ƚ�
        {
            if(a[j]<a[i])
                sum++;
        }
        printf("%d ",sum);//����ȽϽ��
        sum = 0;
    }
    return 0;
}
