//1.�����ַ��������� 2.�ַ������� 3.���nֵ

#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,num,sum;
    char text[40000],str[200];//text�������ַ�����str�������ַ���
    scanf("%s",str);
    n=strlen(str);//�����һ���ַ��������뻺���ַ�����������nֵ
    strcat(text,str);//��str���ӵ�text����ʵҲ������strcpy�ģ��ô���ͬ
    for(i=2;i<=n;i++)//��Ϊ�Ѿ����ӵ�һ���ˣ����ѭ���ӵڶ����ַ���ʼ
    {
        scanf("%s",str);
        strcat(text,str);//���벢����
    }
    printf("%d ",n);//���nֵ����ס��ÿ���������Ͽո�
    for(i=0,sum=0,num='0';i<=strlen(text);i++)//��text[i]��ʼѭ��
        if(num==text[i])//�ж�����ַ��Ƿ�����һ���ַ���ȣ���һ���ַ��롮0�����жϣ�
            sum++;//�����ȣ�sum��һ
        else
        {
            num=text[i];
            printf("%d ",sum);//��֮�����sumֵ�����ո񣩣�����ʼ��num��text
            sum=1;
        }
    return 0;
}
