#include<stdio.h>
int main()
{
    int s,v,h,m,x,y,i;
    scanf("%d%d",&s,&v);
    if(s%v==0)//�ж��Ƿ�Ҫ����ȡ��
        i=10+s/v;//ʮ������������
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
    if(h>=10)//�ж�Сʱ�����Ƿ�Ϊ��λ��
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
