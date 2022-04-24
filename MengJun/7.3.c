/*
题目内容：

输入一维数组的6个元素，将最大值与最后一个交换。

输入格式:

"%d"

输出格式：

"%d\n"

输入样例：

3 5 6 8 1 2

输出样例：

3
5
6
2
1
8
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[6];
	int max = 0;
	int temp;
	for (int i = 0; i <= 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j <= 5; j++)
	{
		for (int k = 0; k <= 5; k++)
		{
			if (a[max] < a[k])
			{
				max = k;
			}
		}
	}
	temp = a[max];
	a[max] = a[5];
	a[5] = temp;
	for (int i = 0; i <= 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}