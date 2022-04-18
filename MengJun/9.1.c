/*
题目内容：

编写函数，根据给定公式计算e的值：1+1/1!+1/2!+1/3!+……+1/n!的值（取前n项），要求在主函数中输入n的值，调用函数并输出结果。

输入格式:

%d

输出格式

e=%.4f

输入样例：

10

输出样例：

e=2.7183
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double get_e(int n)
{
	double i, j=1.0, k=1.0;
	double e = 1.0;
	for (i = 1.0; i <= n; i++)
	{
		k *= j++;
		e += (1.0 / k);
	}
	return e;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("e=%.4f", get_e(n));
	return 0;
}