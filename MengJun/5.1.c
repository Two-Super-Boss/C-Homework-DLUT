/*
题目内容：

求1~100以内 ( 包括100）能被3整除同时被5整除余数为1的所有数之和。要求用for语句完成。

输入格式:

无

输出格式：

"sum=%d\n"

输入样例：

无

输出样例：

sum=357
*/

#include <stdio.h>
int main()
{
	int i = 1, sum = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 1)
		{
			sum += i;
		}
	}
	printf("sum=%d\n", sum);
	return 0;
}