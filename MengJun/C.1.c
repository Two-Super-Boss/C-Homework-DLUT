/*
用do while 语句实现从键盘输入一组整数，输入负数后结束，求这些正数的平均值。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, sum = 0, i = 0;
	double ave;
	do
	{
		scanf("%d", &a);
		if (a >= 0)
		{
			sum += a;
			i++;
		}
	} while (a >= 0);
	ave = (double)sum / i;
	printf("%.2f", ave);
	return 0;
}