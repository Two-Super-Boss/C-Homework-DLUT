/*
题目内容：

编写程序，输入6个整数存入数组中，按输入顺序的逆序存放在该数组中并输出。

输入格式:

"%d"

输出格式：

"%d\n"

输入样例：

1 2 3 4 5 6

输出样例：

6
5
4
3
2
1
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[6];
	for (int i = 5; i >= 0; i--)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i <= 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}