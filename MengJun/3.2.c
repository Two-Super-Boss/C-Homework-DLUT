/*
题目内容：

编写程序，使用getchar()函数输入一个字母（大写小写都可以），输出其ASCII值。

输入格式:

getchar()

输出格式：

%d

输入样例：

A

输出样例：

ASCII=65
*/

#include <stdio.h>
int main()
{
	char ch;
	ch = getchar();
	printf("ASCII=%d", ch);
	return 0;
}