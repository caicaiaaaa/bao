#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0,m;// sum�Ǽ�����,mΪ�����ѹ�����֣�m��ʾ���0��1����
	cin>>n;//nΪ����߳�
	while((cin>>m)!=0)//��ͣ���룬��ctrl+zֹͣ����
	{
		i++;//����i��¼m��λ��
		if(i%2!=0) //i%2!=0ʱ�����ֱ�ʾ0�ĸ���
		for(int j=1;j<=m;j++) //������0
		{
			cout<<"0";
			sum++;//ÿ���1��0��sumֵ��һ
			if(sum==n)//��sumֵ�ﵽһ�й涨��Ŀʱ
			{
				cout<<endl;//����
				sum=0;//sumֵ����
			}
		}
		else  //i%2==0ʱ�����ֱ�ʾ1�ĸ���
		for(int k=1;k<=m;k++) //������1
		{
			cout<<"1";
			sum++;//ÿ���1��1��sumֵ��һ
			if(sum==n)//��sumֵ�ﵽһ�й涨��Ŀʱ
			{
				cout<<endl;// ����
				sum=0;//sumֵ����
			 }
		}
	}
	return 0;
}
