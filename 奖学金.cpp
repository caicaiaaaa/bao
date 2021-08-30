#include<bits/stdc++.h>
using namespace std;

struct student
{
    int c;
    int m;
    int e;
    int all;
    int num;
};//用结构体记录学生成绩

int main()
{
    int n,max=1,j=0;
    student a[301];
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i].c>>a[i].m>>a[i].e;
        a[i].all=a[i].c+a[i].m+a[i].e;
        a[i].num=i;
    }
    while(j!=5)
        {
            for(int i=2;i<=n;++i)
            {
                if(a[i].all>a[max].all||(a[i].all==a[max].all && a[i].c>a[max].c)||(a[i].all==a[max].all && a[i].c==a[max].c && a[i].num<a[max].num))
                {
                    max=i;
                }
            }
            cout<<a[max].num<<" "<<a[max].all<<endl;
            a[max].all=-1;
            max=1;
            ++j;

        }//排序输出前n名学生成绩
        return 0;
}
