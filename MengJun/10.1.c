/*
题目内容：编写求x的n次方的递归函数，在主函数调用并输出。(x为double型，n为整型，函数类型为double型）

输入格式:

%lf%d

输出格式：

%f

输入样例：

4 3

输出样例：

64.000000
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double p(double x, int n)
{
	if (n == 1)
		return x;
	else
		return x * p(x, n-1);
}

int main()
{
	double x;
	int n;
	scanf("%lf%d", &x, &n);
	printf("%f", p(x, n));
	return 0;
}