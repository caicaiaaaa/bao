/*情况1（右转90度） 原图中(i,j)被旋转到了(j,n-i+1) 这里的+1很重要

情况2（右转180度） 原图中(i,j)被旋转到了(n-i+1,n-j+1)

情况3（右转270度） (i,j)-->(n-j+1,i)

情况4（对称） (i,j)-->(i,n-j+1)

情况5（组合） 将情况4做完后传给情况1，2，3即可

情况6（不动） ……

情况7（无解） 以上情况均不符合*/

#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=12;
int n;
struct Matrix
{
    int a[maxn][maxn];
    void in(){for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf(" %c",a[i]+j);}
    Matrix rotate()
    {
        Matrix ans;
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)ans.a[i][j]=a[n-j-1][i];
        return ans;
    }
    Matrix reflex()
    {
        Matrix ans;
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)ans.a[i][j]=a[i][n-j-1];
        return ans;
    }
    bool operator==(Matrix b)//判断两个矩阵是否相等
    {
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)
        if(a[i][j]!=b.a[i][j])return false;
        return true;
    }
}from,to,mid;
int main()
{
    scanf("%d",&n);
    from.in();to.in();
    mid=from;
    for(int i=1;i<=3;i++)
    {
        mid=mid.rotate();
        if(mid==to){printf("%d\n",i);return 0;}
    }
    mid=from.reflex();
    if(mid==to){printf("4\n");return 0;}
    for(int i=1;i<=3;i++)
    {
        mid=mid.rotate();
        if(mid==to){printf("5\n");return 0;}
    }
    if(from==to){printf("6\n");return 0;}
    printf("7\n");//这些数字的顺序很重要
    return 0;
}
