/*求序列长度为5的第114个排列

初始化 k=114-1=113，

第一位 k/4!=4,找到还没使用过的第5小的数字，5，则num[1]=5 , k%=4! (k=17)

第二位 k/3!=2,找到还没使用过的第3小的数字，3，则num[2]=3 , k%=3! (k=5)

第三位 k/2!=2,找到还没使用过的第3小的数字，4，则num[3]=4 , k%=2! (k=1)

第四位 k/1!=1,找到还没使用过的第2小的数字，2，则num[4]=2 , k%=1! (k=0)

第五位 k=0 , 找到还没使用过的第1小的数字, 1, 则num[5]=1;*/

#include<iostream>
#include<cstdio>
using namespace std;

int fac[20]; //阶乘
void init()
{
	fac[0]=fac[1]=1;
	for(int i=2;i<=20;i++)
	{
		fac[i]=i*fac[i-1];
	}
} //阶乘预处理

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
