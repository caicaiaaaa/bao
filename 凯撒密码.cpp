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
            a[i]=a[i]-26+n;//����z��a���¿�ʼѭ��
        else
            a[i]=a[i]+n;//û����zֱ�Ӻ���nλ
    }
    cout<<a;
    return 0;
}
