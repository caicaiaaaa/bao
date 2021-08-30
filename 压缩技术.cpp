#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0,m;// sum是计数器,m为输入的压缩数字，m表示输出0或1个数
	cin>>n;//n为点阵边长
	while((cin>>m)!=0)//不停输入，按ctrl+z停止输入
	{
		i++;//利用i记录m的位置
		if(i%2!=0) //i%2!=0时此数字表示0的个数
		for(int j=1;j<=m;j++) //逐个输出0
		{
			cout<<"0";
			sum++;//每输出1个0，sum值加一
			if(sum==n)//当sum值达到一行规定数目时
			{
				cout<<endl;//换行
				sum=0;//sum值清零
			}
		}
		else  //i%2==0时此数字表示1的个数
		for(int k=1;k<=m;k++) //逐个输出1
		{
			cout<<"1";
			sum++;//每输出1个1，sum值加一
			if(sum==n)//当sum值达到一行规定数目时
			{
				cout<<endl;// 换行
				sum=0;//sum值清零
			 }
		}
	}
	return 0;
}
