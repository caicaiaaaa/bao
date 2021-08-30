#include<bits/stdc++.h>
using namespace std;
struct note
{
    string s;
    int y,m,d,num;
}f[100];
bool cmp(note a,note b)
{
    if(a.y==b.y)//先比较年
    {
        if(a.m==b.m)//再比较月
        {
            if(a.d==b.d)//再比较日
                return a.num>b.num;
            else
                return a.d<b.d;
        }
        else
            return a.m<b.m;
    }
    else
        return a.y<b.y;
}//生日从大到小输出
int n;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       {
         cin>>f[i].s>>f[i].y>>f[i].m>>f[i].d;
          f[i].num=i;
       }
    sort(f+1,f+n+1,cmp);
    for(int i=1;i<=n;i++)
        cout<<f[i].s<<endl;
    return 0;
}
