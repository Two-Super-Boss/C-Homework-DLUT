/*
题目内容：

编写程序，从键盘输入任意一个3位正整数，计算并输出它的逆序数。

例如，输入123，由123分离出其百位1、十位2、个位3，然后计算3*100+2*10+1 = 321，并输出321。

提示：用%10可以得到个位数，用/100可以得到百位数。

输入格式:

%d

输出格式：

"y=%d\n"

输入样例：

123

输出样例：

y=321
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int input, a, b, c, output;
	scanf("%d", &input);
	a = input / 100;
	b = input / 10 % 10;
	c = input % 10;
	output = c * 100 + b * 10 + a;
	printf("y=%d\n", output);
	return 0;
}