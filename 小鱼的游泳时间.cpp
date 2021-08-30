#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int h=c-a;
    if(b>d)
        h--;
    int m=d-b;
    if(m<0)
        m=m+60;
    printf("%d %d",h,m);
    return 0;
}
