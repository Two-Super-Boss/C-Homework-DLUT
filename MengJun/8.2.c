/*
题目内容：

求3行3列矩阵的外围元素之和。

输入格式:

"%d"

输出格式：

"%d"

输入样例：

1 2 3
4 5 6
7 8 9

输出样例：

40
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[3][3];
	int i, j, sum=0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			sum += a[i][j];
	sum -= a[1][1];
	printf("%d", sum);
	return 0;
}