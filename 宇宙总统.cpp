#include<bits/stdc++.h>
using namespace std;

struct president
{
    string s;
    int number;
    int length;
}a[21];

int cmp(president a,president b)
{
    if(a.length==b.length)
        return a.s>b.s;//数字长度相同则比较大小
    else
        return a.length>b.length;//长度不同则长的数字更大
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i].s;
        a[i].number=i+1;
        a[i].length=a[i].s.length();
    }
    sort(a,a+n,cmp);
    cout<<a[0].number<<endl;
    cout<<a[0].s<<endl;
    return 0;

}
