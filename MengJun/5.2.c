/*
题目内容：

用do while 语句实现反复从键盘输入一个整数，如果大于或等于零，累加求和，直到输入负数结束。然后求出平均值并输出。

输入格式:

"%d"

输出格式：

"AVE=%.2f\n"

输入样例：

25 35 45 55 -1

输出样例：

AVE=40.00
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int input, sum = 0, i = 0;
	double AVE;
	do
	{
		scanf("%d", &input);
		if (input >= 0)
		{
			sum += input;
			i++;
		}
	} while (input >= 0);
	printf("AVE=%.2f\n", (double)(sum / i));
	return 0;
}