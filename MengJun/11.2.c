/*
题目内容：利用指针编程，将数组中所有元素的值对称交换。使用数组int a[10].

输入格式:

%d

输出格式：

%2d

输入样例：

9 1 7 3 4 5 6 2 8 0

输出样例：

 0 8 2 6 5 4 3 7 1 9
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[10], * arr = a;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 5; i++)
	{
		int temp = *(arr + i);
		*(arr + i) = *(arr + 9 - i);
		*(arr + 9 - i) = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%2d", a[i]);
	return 0;
}