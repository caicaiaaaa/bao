#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
int a[100007];
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];//��������
	int l=0,r=1e8+1,m;//r=100000001
    	//l����ȡ������Сֵ��������0��Ҳ�������ֱ�����������Ҫһ�Ѵ������У���r�Ǿ���ȡ������ֵ
	while(l+1<r)//ģ��
	{
		m=(l+r)/2;
		int cnt=0;//��mΪ�����ܹ��г�ľ��Ķ���
		for(int i=1;i<=n;i++)
		cnt+=a[i]/m;//c++�Դ�������Ҳ������floor
        	//ö��ÿ��ľ�����г�����ľ��
		if(cnt>=k)l=m;//�еö��պõ��ڣ���˵�����п��ܳ��ȸ���
		else r=m;//�е��٣�˵������̫����
	}
	cout<<l<<endl;//lΪ��
	return 0;
}
