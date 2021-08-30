/*����չ����ʽ��X=an*(n-1)!+an-1*(n-2)!+...+ai*(i-1)!+...+a2*1!+a1*0!

aiΪ����������0<=ai<i(1<=i<=n)*/




#include <stdio.h>
#include <string.h>

int factor[] = {1,1,2,6,24,120,720,5040,40320,362880,39916800,479001600};//�׳˱�
int cantor(char x[],int len);
char xx[100];
int main()
{
    scanf("%s",xx);
    printf("%d\n",cantor(xx,strlen(xx))+1);//�����ı�Ŵ�1��ʼ,��0��ʼ�򲻼�1
    return 0;
}

int cantor(char x[],int len)
{
    int sum=0,s,i,j;
    for(i=0;i<=len;i++)
    {
        s=0;
        for(j=i+1;j<len;j++)
        {
            if(x[j]<x[i])
                s++;
        }
        sum+=s*factor[len-i-1];
    }
    return sum;
}
