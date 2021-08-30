//用true标记，不需要计算，最后统计即可
#include <stdio.h>
int main()
{
    int L, i, j, n;
    bool trees[10001];
    for(i = 0; i < 10001; i++)
        trees[i] = true;   //初始化每一棵树都为true
    scanf("%d%d",&L,&n);
    for(i = 0; i < n; i++)
    {
        int begin, end;
        scanf("%d%d", &begin, &end);
        for(j = begin; j <= end; j++)
            trees[j] = false;//被砍的树标记为false
    }
    int count = 0;
    for(i = 0; i <= L; i++)
       if(trees[i])  count ++;
    printf("%d\n", count);//输出
    return 0;
}
