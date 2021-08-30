#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[102];
int main()
{
    gets(a);
    gets(a);
    int all=0;
    for(int i=0;i<strlen(a);i++)
        if(a[i]=='V'&&a[i+1]=='K')//如果VK连续则记录并标记为X
        {
            all++;
            a[i]='X';
            a[i+1]='X';
        }
    for(int i=0;i<strlen(a);i++)
        if(a[i]!='X'&&a[i]==a[i+1])//连续两数为VV或KK则改变一个字母也可以变成VK
        {
            all++;
            break;
        }
        printf("%d",all);
        return 0;
}
