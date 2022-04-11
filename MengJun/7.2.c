/*
题目内容：

定义一维整型数组，输入5个数，从大到小排序，输出次最大值。

输入格式:

"%d"

输出格式：

"次最大值=%d"

输入样例：

1 5 6 8 2

输出样例：

次最大值=6
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[5];
	int max, max2;
	for (int i = 0; i <= 4; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j <= 4; j++)
	{
		for (int k = 0; k <= 4; k++)
		{
			if (a[max] < a[k])
			{
				max2 = max;
				max = k;
			}
		}
	}
	printf("次最大值=%d", a[max2]);
	return 0;
}