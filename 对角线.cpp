#include <cstdio>
#include <cstring>
#include <cmath>

unsigned long long n;

int main(){

	//读入
	scanf("%lld",&n);

	//计算并输出 C4/n
	printf("%lld\n",n*(n-1)/2*(n-2)/3*(n-3)/4);

	return 0;

}
