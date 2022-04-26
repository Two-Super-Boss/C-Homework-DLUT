/*
题目内容：

编写函数，输入N个整数，将它们存入数组a中，再输入一个整数x，然后在数组中

查找x，如果找到，输出相应的下标，否则，输出"Not Found"。要求在主函数中输入10个整数及查找结果。

输入格式：

%d

%d

输出格式：

%d

输入样例：

1 2 3 4 5 6 7 8 9 10

输入：5

或者输入11：

输出样例：

5

Not Found
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 10

int target(int a[], int n)
{
	int i = 0, j;
	for (j = 0; j < N; j++)
		if (a[j] == n)
			i = j + 1;
	return i;
}

int main()
{
	int a[N], x, i, result;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);
	result = target(a, x);
	if (result != 0)
		printf("%d", result);
	else
		printf("Not Found");
	return 0;
}