/*
题目内容：

求5行5列矩阵的主对角线和副对角线元素之和。

输入格式:

"%d"

输出格式：

"sum=%d"

输入样例：

1 2 3 4 3
2 3 4 1 6
3 4 5 6 7
4 2 6 7 8
1 6 7 8 9

输出样例：

sum=37
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[5][5];
	int i, j, sum = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 5; i++)
		sum += a[i][i];
	for (i = 0, j = 4; i < 5, j >= 0; i++, j--)
		sum += a[i][j];
	printf("sum=%d", sum);
	return 0;
}