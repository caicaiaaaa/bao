#include<bits/stdc++.h>
using namespace std;
double n,m,k,l,r;
bool pd(double x){//�жϵ�ǰ���Ƿ�����
	return (pow(1.0/(1.0+x),k)>=1-n/m*x);//pow����
}
int main(){
	cin>>n>>m>>k;
   	//����ģ��
	l=0;r=10;//�����ʿ��ܴ���1
	while(r-l>=0.0001){//ע�⾫������
		double mid=(l+r)/2;
		if(pd(mid))r=mid;
		else l=mid;
	}
	cout<<fixed<<setprecision(1)<<l*100;//���һλС��
	return 0;
}
