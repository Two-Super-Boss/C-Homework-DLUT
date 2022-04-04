/*
题目内容：

找出一个大于给定整数且紧随这个整数的素数，例如 给定整数8，找到的素数是11。

输入格式:

"%d"

输出格式：

"prime=%d\n"

输入样例：

8

输出样例：

prime=11
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	do
	{
		a++;
		b = 0;
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				b++;
			}
		}
	} while (b != 0);
	printf("prime=%d\n", a);
	return 0;
}