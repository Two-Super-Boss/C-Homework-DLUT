/*
题目内容：编写函数，通过键盘输入10个整数，找出其中最大的数和最小的数，在主调函数中输入数据和结果。

输入格式:

%d

输出格式：

max=%d,min=%d

输入样例：

2 3 4 1 7 6 8 9 26 35

输出样例：

max=35,min=1
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int max(int a[])
{
	int maxC = 0;
	int j;
	for (j = 0; j < 10; j++)
		if (a[j] > a[maxC])
			maxC = j;
	return a[maxC];
}

int min(int a[])
{
	int minC = 0;
	int k;
	for (k = 0; k < 10; k++)
		if (a[k] < a[minC])
			minC = k;
	return a[minC];
}

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("max=%d,min=%d", max(a), min(a));
	return 0;
}