#include<bits/stdc++.h>
using namespace std;

int x[5000000],k;
int main()
{
    int n;

    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
	nth_element(x, x+k, x+n);//这个函数主要用来将数组元素中第k小的整数排出来并在数组中就位，随时调用
	printf("%d",x[k]);


}
