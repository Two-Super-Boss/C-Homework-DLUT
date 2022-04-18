/*
编写函数，求一组整数中大于平均值的个数，数组元素个数任意。例如：给定的一组数为1,3,6,9,4,23,35,67,12,88时，函数值为3。

函数头定义：int aver(int a[],int n);

输入格式:

%d

输出格式：

%d

输入样例：

1 3 6 9 4 23 35 67 12 88

输出样例：

3
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 10

int aver(int a[], int n)
{
	int j, count = 0;
	double sum = 0.0, ave;
	for (j = 0; j < n; j++)
		sum += a[j];
	ave = sum / n;
	for (j = 0; j < n; j++)
		if (a[j] > ave)
			count++;
	return count;
}

int main()
{
	int a[N];
	int i, n = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		n++;
	}
	printf("%d",aver(a, n));
	return 0;
}