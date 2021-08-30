#include<iostream>
#include<cstdio>
using namespace std;
double a,b,c,d,a1,b1,c1,d1;// 题目要的数据是小数点后2位所以定义首先用double
int num;// num用来记录解的个数 因为一元三次方程只有三个解  解达到三个以后就break掉 减少多余循环
int main()
{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);// double类型用 lf 输入哦
	for(double i=-100.00;i<=100.00;i+=0.001)// 最后结果保存两位数 所以这里i每次加0.001（n只有100所以暴不了）
	{
		double l=i,r=i+0.001;
		if((a*l*l*l+b*l*l+c*l+d)*(a*r*r*r+b*r*r+c*r+d)<0)// 若存在两个数x1，x2且x1<x2，f（x1）*f（x2）<0 则方程解肯定在x1~x2范围内   基本数学原理
		printf("%.2f ",l),num++;// 小数点后两位输出
		if(num==3) break;// 解达到三个break掉
	}
	return 0;
}
