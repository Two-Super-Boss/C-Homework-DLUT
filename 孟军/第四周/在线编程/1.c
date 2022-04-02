/*
题目内容：

编写程序，输入一个字符，若是大写字母，转换成小写字母，若是小写字母，则转换成大写字母输出。



输入格式:

getchar()



输出格式：

putchar()



输入样例：

a



输出样例：

A
*/

#include <stdio.h>
int main()
{
	int a;
	a = getchar();
	if (a >= 'A' && a <= 'Z')
	{
		putchar(a + 32);
	else
	{
		putchar(a - 32);
	}
	return 0;
}