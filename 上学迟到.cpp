#include<stdio.h>
int main()
{
    int s,v,h,m,x,y,i;
    scanf("%d%d",&s,&v);
    if(s%v==0)//判断是否要向上取整
        i=10+s/v;//十分钟垃圾分类
    else
        i=11+s/v;
    if(480-i<0)
    {
        x=1440+(480-i);
        h=x/60;
        m=x%60;
    }
    else
    {
        y=480-i;
        h=y/60;
        m=y%60;
    }
    if(h>=10)//判断小时分钟是否为两位数
    {
        if(m>=10)
            printf("%d:%d",h,m);
        else
            printf("%d:0%d",h,m);
    }
    else
    {
        if(m>=10)
            printf("0%d:%d",h,m);
        else
            printf("0%d:0%d",h,m);
    }
    return 0;

}
