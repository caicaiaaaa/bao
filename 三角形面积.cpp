#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    double p,m,n,t,S;
    scanf("%lf%lf%lf",&a,&b,&c);
    p=(a+b+c)/2;
    m=p-a;
    n=p-b;
    t=p-c;
    S=sqrt(p*m*n*t);
    printf("%.1f",S);
    return 0;
}
