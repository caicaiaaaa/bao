//用到toupper函数，这个函数可以只将小写改成大写，大写不会改变

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        s[i]=toupper(s[i]);
    cout<<s;
    return 0;
}
