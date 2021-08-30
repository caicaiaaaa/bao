/*求a 的 b 次方对 c 取余的值。
解决方法

1）将幂拆解为多个底数的平方次的积；

2）如果指数为偶数，把指数除以2，并让底数的平方次取余 ；

3）如果指数为奇数，就把多出来的底数记录下来，再执行偶数次操作。*/

#include<iostream>
using namespace std;

long long PowerMod(long long a,long long b,long long c)
{
	long long ans = 1;
	while(b)
	{
		if(b % 2)
			ans *= a %c;
		a = a*a%c;
		b /= 2;
	}
	ans %= c;
	return ans;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long a,b,c,ans;
		cin>>a>>b>>c;
		ans = PowerMod(a,b,c);
		cout<<ans<<endl;
	}
	return 0;
}
