//每一行的第一个元素和最后一个元素均为11。
//第i行第j列的元素等于第i−1行第j−1列和第i−1行第j列之和。

#include <stdio.h>

int main()
{
    int i,j,n;
    int a[20][20];

    scanf("%d",&n);
    for(i = 0; i < n; i++) //杨辉三角形的每一行的首位都是1
    {
        a[i][i] = 1;
        a[i][0] = 1;
    }

    for(i = 2; i < n; i++)
    {
        for(j = 1; j <= i - 1; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <=i; j++)
        {
            printf("%d ", a[i][j]);

        }
        printf("\n");
    }

    return 0;
}

