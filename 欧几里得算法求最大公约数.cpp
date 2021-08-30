/*r=a%b;  a,b的公约数等价于b,r公约数的问题
所有就让a=b;b=r继续循环*/

#include <stdio.h>
int main()
{
    int a,b,r;
    while(scanf("%d %d",&a,&b),a,b)
    {
        r = a % b;
        while(r != 0)
        {
            a = b;
            b = r;
            r = a % b;
        }
        printf("%d\n",b);
    }
    return 0;
}
