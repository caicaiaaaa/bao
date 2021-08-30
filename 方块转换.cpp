/*���1����ת90�ȣ� ԭͼ��(i,j)����ת����(j,n-i+1) �����+1����Ҫ

���2����ת180�ȣ� ԭͼ��(i,j)����ת����(n-i+1,n-j+1)

���3����ת270�ȣ� (i,j)-->(n-j+1,i)

���4���Գƣ� (i,j)-->(i,n-j+1)

���5����ϣ� �����4����󴫸����1��2��3����

���6�������� ����

���7���޽⣩ ���������������*/

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
    bool operator==(Matrix b)//�ж����������Ƿ����
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
    printf("7\n");//��Щ���ֵ�˳�����Ҫ
    return 0;
}
