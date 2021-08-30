//先建一个全部为0的数组，如果开灯就改为1，如果关灯就再改回1

#include<bits/stdc++.h>
using namespace std;
int a[2000001],n;
double x,y;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;//输入
		for(double j=1;j<=y;++j){
			if(a[int(j*x)]==0) a[int(j*x)]=1;//判断
			else a[int(j*x)]=0;
		}
	}
	for(int i=1;;i++){
		if(a[i]==1){//判断
			cout<<i;
			break;
		}
	}
	return 0;
}
