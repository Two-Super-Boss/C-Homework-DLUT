/*
题目内容：

编写函数，对于任意输入的一个整数，转换为千分位分隔的字符形式，在主函数中调用并输出。

输入格式:

%d

输出格式：

%c 或 putchar()

输入样例：

123456

输出样例：

123,456
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20

void addDot(int n)
{
	int data[N] = { 0 }, index = 0, i;
	while (n)
	{
		data[index++] = n % 10;
		n /= 10;
	}
	for (i = index - 1; i >= 0; i--)
	{
		printf("%d", data[i]);
		if (i % 3 == 0 && i)
			putchar(',');
	}
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	addDot(n);
	return 0;
}