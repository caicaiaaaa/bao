#include<iostream>
#include<cstdio>
using namespace std;
double a,b,c,d,a1,b1,c1,d1;// ��ĿҪ��������С�����2λ���Զ���������double
int num;// num������¼��ĸ��� ��ΪһԪ���η���ֻ��������  ��ﵽ�����Ժ��break�� ���ٶ���ѭ��
int main()
{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);// double������ lf ����Ŷ
	for(double i=-100.00;i<=100.00;i+=0.001)// �����������λ�� ��������iÿ�μ�0.001��nֻ��100���Ա����ˣ�
	{
		double l=i,r=i+0.001;
		if((a*l*l*l+b*l*l+c*l+d)*(a*r*r*r+b*r*r+c*r+d)<0)// ������������x1��x2��x1<x2��f��x1��*f��x2��<0 �򷽳̽�϶���x1~x2��Χ��   ������ѧԭ��
		printf("%.2f ",l),num++;// С�������λ���
		if(num==3) break;// ��ﵽ����break��
	}
	return 0;
}
