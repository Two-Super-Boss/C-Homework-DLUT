/*
题目内容

编写程序，输入两个整型变量，交换两个变量的值，输出交换后的变量。

输入格式:

%d,%d

输出格式：

%d,%d

输入样例：

3,4

输出样例：

4,3
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b;
	int temp;
	scanf("%d,%d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d,%d", a, b);
	return 0;
}