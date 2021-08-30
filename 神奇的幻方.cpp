#include<stdio.h>
int main(void){
    int a[40][40], n;  //建立一个二维数组模拟幻方的盘子（我将其称为盘子）
    int i, j, t = 1;
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			a[i][j] = 0;   //初始化二维数组
		}
	}
	i = 1;
    j = (n + 1) / 2;
	a[i][j] = 1;
    t++;
    while (t <= n * n) {   //总共有n*n个数字
        if (i == 1 && j != n) {  //根据题目要求放置
            i = n;
            j = j + 1;
			a[i][j] = t;
            t++;
            continue;
        }
		if (j == n && i != 1) {
            i = i - 1;
            j = 1;
			a[i][j] = t;
            t++;
            continue;
        }
		if (i == 1 && j == n) {
            i = i + 1;
            j = j;
			a[i][j] = t;
            t++;
            continue;
        }
		if (i != 1 && j != n){
            if (a[i - 1][j + 1] == 0) {
                i = i - 1;
                j = j + 1;
				a[i][j] = t;
                t++;
                continue;
            } else {
                i = i + 1;
                j = j;
				a[i][j] = t;
                t++;
                continue;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
