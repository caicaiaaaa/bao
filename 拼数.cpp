#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string s[25];
int n;

bool cmp(string a,string b)
{
    return a+b>b+a;//�Զ�������������һ���ǳ��������a=321��b=32��a+b=32132��b+a=32321��������sort����������32>321�������32132>32321�����
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
