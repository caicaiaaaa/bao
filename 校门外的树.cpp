//��true��ǣ�����Ҫ���㣬���ͳ�Ƽ���
#include <stdio.h>
int main()
{
    int L, i, j, n;
    bool trees[10001];
    for(i = 0; i < 10001; i++)
        trees[i] = true;   //��ʼ��ÿһ������Ϊtrue
    scanf("%d%d",&L,&n);
    for(i = 0; i < n; i++)
    {
        int begin, end;
        scanf("%d%d", &begin, &end);
        for(j = begin; j <= end; j++)
            trees[j] = false;//�����������Ϊfalse
    }
    int count = 0;
    for(i = 0; i <= L; i++)
       if(trees[i])  count ++;
    printf("%d\n", count);//���
    return 0;
}
