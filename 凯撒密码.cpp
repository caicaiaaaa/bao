#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]+n>122)
            a[i]=a[i]-26+n;//超过z从a重新开始循环
        else
            a[i]=a[i]+n;//没超过z直接后移n位
    }
    cout<<a;
    return 0;
}
