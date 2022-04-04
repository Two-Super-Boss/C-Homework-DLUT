/*
题目内容：

参考课件中富文本提供的内容，（三种方法任选其一）求两个整数的最大公约数。
//这里选用第三种

输入格式:

"%d%d"

输出格式：

"GCD=%d\n"

输入样例：

36 8

输出样例：

GCD=4
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("GCD=%d\n", b);
	return 0;
}