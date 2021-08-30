/*现在给你不共线的三个点A,B,C的坐标，它们一定能组成一个三角形，
  现在让你判断A，B，C是顺时针给出的还是逆时针给出的？



  利用矢量叉积判断是逆时针还是顺时针。
      设A(x1,y1),B(x2,y2),C(x3,y3),则三角形两边的矢量分别是：
      AB=(x2-x1,y2-y1), AC=(x3-x1,y3-y1)
      则AB和AC的叉积为：(2*2的行列式)
      |x2-x1, y2-y1|
      |x3-x1, y3-y1|
      值为：(x2-x1)*(y3-y1) - (y2-y1)*(x3-x1)

      利用右手法则进行判断：
      如果ABxAC>0，则三角形ABC是逆时针的；
      如果ABxAC<0，则三角形ABC是顺时针的；
    如果ABxAC=0，则说明三点共线。
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        //分别输入A，B，C三点的坐标
        double ans=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);//表示向量AB与AC的叉积的结果
        if(ans>0)
            cout<<"逆时针"<<endl;
        if(ans<0)
            cout<<"顺时针"<<endl;
        if(ans==0)
            cout<<"共线"<<endl;
    }
    return 0;
}
