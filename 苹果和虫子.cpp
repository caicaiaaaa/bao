#include<bits/stdc++.h>//����ͷ�ļ�
using namespace std;
int m,t,s;
int main()
{
	cin>>m>>t>>s;
	if(t==0)//����t=0�����
	{
		cout<<0<<endl;
		return 0;
	}
	if(s%t==0)//���s��t��������
		cout<<max(m-s/t,0)<<endl;
	else//�������
		cout<<max(m-s/t-1,0)<<endl;
	return 0;//�������
}
