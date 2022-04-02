/*
根据下面一元二次方程求根公式，计算并输出一元二次方程x2+x-2=0的两个实根，要求精确到小数点后4位。程序中所有浮点数的数据类型均为float.

图在/photo中

输入格式:

无



输出格式：

 "x1=%.4f\n"

  "x2=%.4f\n"

输入样例：





输出样例：

x1=1.0000

x2=-2.0000
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int a = 1, b = 1, c = 2;
	float x1, x2;
	x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	printf("x1=%.4f\nx2=%.4f\n", x1, x2);
	return 0;
}