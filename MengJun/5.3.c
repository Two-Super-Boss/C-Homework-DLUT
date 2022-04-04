/*
题目内容：

用while语句计算圆周率的近似值。（直到累加项的绝对值小于 0.00001 ）
公式 : pi /4 ≈1-1/3+1/5-1/7 .......

输入格式:

无

输出格式：

"pi=%.2f\n"

输入样例：

无

输出样例：

pi=3.14
*/

#include <stdio.h>
#include <math.h>
int main()
{
	double PI, mini = 0;
	double i = 1, j = 0;
	for (i = 1; (1 / i) >= 0.00001; i += 2)
	{
		mini += (1 / i) * pow(-1, j);
		j++;
	}
	PI = 4 * mini;
	printf("pi=%.2f\n", PI);
	return 0;
}