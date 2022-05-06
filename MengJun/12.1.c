/*
题目内容：利用指针编写一函数，输入3个整数，按由大到小的顺序将它们输出。

输入格式:

%d

输出格式：

%3d

输入样例：

25 68 17

输出样例：

 68 25 17
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void c2(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void c3(int* x, int* y, int* z)
{
	if (*x < *y) c2(x, y);
	if (*x < *z) c2(x, z);
	if (*y < *z) c2(y, z);
}

int main()
{
	int a, b, c;
	int* p1 = &a, * p2 = &b, * p3 = &c;
	scanf("%d%d%d", p1, p2, p3);
	c3(p1, p2, p3);
	printf("%3d%3d%3d", *p1, *p2, *p3);
	return 0;
}