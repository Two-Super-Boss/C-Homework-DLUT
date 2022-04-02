/*
题目内容：

编写程序，输入任意正数，计算并输出其平方根。

提示：开平方使用函数sqrt(x)，x为双精度型，需要包含头文件math.h。

#include <math.h>

从键盘输入数据可以使用函数scanf()。例如，scanf("%lf", &x); 表示从键盘输入双精度实数并存入双精度变量x中。



程序运行结果如下：

输入：2<回车>

输出：1.414214



输入格式:

%lf



输出格式：

%f



输入样例：

2

输出样例：

1.414214
*/

#include <stdio.h>
#include <math.h>
int main()
{
	double a, b;
	scanf("%lf", &a);
	b = sqrt(a);
	printf("%f", b);
	return 0;
}