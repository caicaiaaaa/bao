#include<cstdio>
using namespace std;

int n,m,q,a[1000005];

int find(int x) //���ֲ���
{
	int l=1,r=n;
	while (l<r)
	{
		int mid=l+(r-l)/2;
		if (a[mid]>=x) r=mid;
		else l=mid+1;
	}

	if (a[l]==x) return l; //�Ҷ��˾��������λ��
	else return -1; // û�ҵ����-1
}

int main()
{
	scanf("%d %d",&n,&m); //����

	for (int i=1 ; i<=n ; i++)
	    scanf("%d",&a[i]); //���Ƕ���

	for (int i=1 ; i<=m ; i++)
	{
		scanf("%d",&q);
		int ans=find(q); //�������ҵĽ��
		printf("%d ",ans); //���
	}

	return 0;
}
