/*r=a%b;  a,b�Ĺ�Լ���ȼ���b,r��Լ��������
���о���a=b;b=r����ѭ��*/

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
