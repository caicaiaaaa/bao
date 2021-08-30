/*��a �� b �η��� c ȡ���ֵ��
�������

1�����ݲ��Ϊ���������ƽ���εĻ���

2�����ָ��Ϊż������ָ������2�����õ�����ƽ����ȡ�� ��

3�����ָ��Ϊ�������ͰѶ�����ĵ�����¼��������ִ��ż���β�����*/

#include<iostream>
using namespace std;

long long PowerMod(long long a,long long b,long long c)
{
	long long ans = 1;
	while(b)
	{
		if(b % 2)
			ans *= a %c;
		a = a*a%c;
		b /= 2;
	}
	ans %= c;
	return ans;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long a,b,c,ans;
		cin>>a>>b>>c;
		ans = PowerMod(a,b,c);
		cout<<ans<<endl;
	}
	return 0;
}
