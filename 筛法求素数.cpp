/*��һ������ΪN+1�����鱣����Ϣ��true����������false��ʾ����������
�ȼ������е���������������ʼ��Ϊtrue�����ӵ�һ������2��ʼ����2�ı��������Ϊ��������
һֱ������N��Ȼ�������һ�ˣ��ҵ�2�������һ������3������ͬ���Ĵ���
ֱ�������������ȻΪtrue�����־���������*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#define N 100
int main(void)
{
    bool number[N+1];
    int i,j;
    memset(number,true,sizeof(number));
    for(i=2;i<=sqrt(N);i++)
    {
        if(number[i]==true)//���i������
        {
            for(j=2;j*i<=N;j++)
            {
                number[i*j]=false;//���i����������i*j��������
            }
        }
    }//���з����������Ϊfalse�����������Ϊtrue
    for(i=2;i<N+1;i++)
        if(number[i]==true)
            printf("%d ",i);//�����������
    return 0;
}
