#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string s[25];
int n;

bool cmp(string a,string b)
{
    return a+b>b+a;//自定义排序函数，这一步非常巧妙，假设a=321，b=32；a+b=32132，b+a=32321这样下面sort排下来就是32>321避免出现32132>32321的情况
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    sort(s+1,s+n+1,cmp);
    for(int i=1;i<=n;i++)
        cout<<s[i];
    return 0;
}
