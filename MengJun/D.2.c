/*
一个大于4的偶数（从6开始）等于两个素数之和，输出其两个素数。
提示：定义函数int prime(int n),实现判断一个数是否是素数，如果“是”返回1，否则返回0。
*/

#include <stdio.h>
int prime(int n)
{
	int i, v;
	v = 0;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			v++;
	if (v == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a;
	printf("请输入一个大于4的偶数：");
	scanf("%d", &a);
	int i;
	for (i = 2; i <= a / 2; i++)
	{
		int j = a - i;
		if (prime(i) == 1 && prime(j) == 1)
		{
			printf("两个素数是：%d %d", i, j);
		}
	}
	return 0;
}