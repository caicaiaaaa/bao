/*用一个长度为N+1的数组保存信息（true标书素数，false表示非素数），
先假设所有的数都是素数（初始化为true），从第一个素数2开始，把2的倍数都标记为非素数，
一直到大于N，然后进行下一趟，找到2后面的下一个素数3，进行同样的处理
直到最后，数组中依然为true的数字就是素数。*/

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
        if(number[i]==true)//如果i是素数
        {
            for(j=2;j*i<=N;j++)
            {
                number[i*j]=false;//如果i是素数，则i*j不是素数
            }
        }
    }//所有非素数都标记为false，素数都标记为true
    for(i=2;i<N+1;i++)
        if(number[i]==true)
            printf("%d ",i);//输出所有素数
    return 0;
}
