#include<stdio.h>
int main()
{
    int x,n=0;
    scanf("%d",&x);
    int a=0,b=0,c=0,d=0;
    if(x%2==0)
        n++;
    if(x<=12&&x>4)
        n++;
    if(n==2)a=1;
    if(n==1||n==2)b=1;
    if(n==1)c=1;
    if(n==0)d=1;
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}
