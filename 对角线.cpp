#include <cstdio>
#include <cstring>
#include <cmath>

unsigned long long n;

int main(){

	//����
	scanf("%lld",&n);

	//���㲢��� C4/n
	printf("%lld\n",n*(n-1)/2*(n-2)/3*(n-3)/4);

	return 0;

}
