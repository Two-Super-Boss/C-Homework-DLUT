/*
编写函数从n个整数中找出最大数和最小数.

函数原型void maxmin(int a[],int *max,int *min,int n);

提示：可定义最大尺寸#define N 20, 从键盘上输入要处理的数据个数n。

输入n个数，打印最大和最小值都在main函数中完成。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20

void maxmin(int a[], int* max, int* min, int n)
{
	int i;
	*max = a[0];
	*min = a[0];
	for (i = 0; i < n; i++)
	{
		if (*max < a[i])
			*max = a[i];
		if (*min > a[i])
			*min = a[i];
	}
	return;
}

int main()
{
	int a[N], max, min, n;
	printf("输入输入要处理的数据个数n：");
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	maxmin(a, &max, &min, n);
	printf("MAX==%d, MIN==%d", max, min);
	return 0;
}