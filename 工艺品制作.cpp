//将切割的部分标记，最后将未切割部分相加即可

#include<stdio.h>
int main(void)
{
    int i,j,m,sum=0;
    int c,k,g;
    int n,x1,y1,z1,x2,y2,z2;
    int a[21][21][21];

    scanf("%d %d %d",&c,&k,&g);
    for(i=1;i<=c;i++)
        for(j=1;j<=k;j++)
            for(m=1;m<=g;m++)
                a[i][j][m]=1;//初始化
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(i=x1;i<=x2;i++)
            for(j=y1;j<=y2;j++)
                for(m=z1;m<=z2;m++)
                    a[i][j][m]=0;//将切割部分标记
    }
    for(i=1;i<=c;i++)
            for(j=1;j<=k;j++)
                for(m=1;m<=g;m++)
                   if(a[i][j][m]==1)
                      sum++;//未切割部分相加
    printf("%d",sum);
    return 0;
}
