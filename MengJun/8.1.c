/*
题目内容：

将两个字符串连接，不要用stract函数。

输入格式:

"%s"

输出格式：

"%s"

输入样例：

abc
edf

输出样例：

abcedf
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int i=0, j=0;
	char a[5], b[5];
	scanf("%s", a);
	scanf("%s", b);
	while (a[i] != '\0')
		i++;
	while (b[j] != '\0')
		a[i++] = b[j++];
	a[i] = '\0';
	printf("%s", a);
	return 0;
}