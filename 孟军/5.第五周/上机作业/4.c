/*
输入一个四位整数，将其转换成一个相反的数输出。如输入5123，输出3215。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int num, a, b, c, d, newNum;
	scanf("%d", &num);
	a = num / 1000;
	b = num / 100 % 10;
	c = num / 10 % 10;
	d = num % 10;
	newNum = d * 1000 + c * 100 + b * 10 + a;
	printf("%d", newNum);
	return 0;
}