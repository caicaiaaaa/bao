/*�����г���Ϊ5�ĵ�114������

��ʼ�� k=114-1=113��

��һλ k/4!=4,�ҵ���ûʹ�ù��ĵ�5С�����֣�5����num[1]=5 , k%=4! (k=17)

�ڶ�λ k/3!=2,�ҵ���ûʹ�ù��ĵ�3С�����֣�3����num[2]=3 , k%=3! (k=5)

����λ k/2!=2,�ҵ���ûʹ�ù��ĵ�3С�����֣�4����num[3]=4 , k%=2! (k=1)

����λ k/1!=1,�ҵ���ûʹ�ù��ĵ�2С�����֣�2����num[4]=2 , k%=1! (k=0)

����λ k=0 , �ҵ���ûʹ�ù��ĵ�1С������, 1, ��num[5]=1;*/

#include<iostream>
#include<cstdio>
using namespace std;

int fac[20]; //�׳�
void init()
{
	fac[0]=fac[1]=1;
	for(int i=2;i<=20;i++)
	{
		fac[i]=i*fac[i-1];
	}
} //�׳�Ԥ����

void ni_kang_tuo(int num[],int n,int m)
{
	int k=m-1,vis[20]={0};
	for(int i=1;i<=n;i++)
	{
		int j,cnt=k/fac[n-i];
		for(j=1;j<=n;j++)
	      if(!vis[j])
	      {
	         cnt--;
	         if(cnt<0)
	          break;
	      }
		vis[j]=1;
		num[i]=j;
		k%=fac[n-i];
	}
}

int main()
{
	init();
	int n,m,num[20];
	while(~scanf("%d %d",&n,&m))
	{
		ni_kang_tuo(num,n,m);
		for(int i=1;i<=n;i++)
	     printf("%d ",num[i]);
	    putchar('\n');
	}
	return 0;
}
