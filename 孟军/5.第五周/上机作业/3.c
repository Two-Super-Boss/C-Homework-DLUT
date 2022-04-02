/*
实现从键盘输入一个字符，使用条件运算符（不使用if语句），如果是大写字母转换成小写字母输出，如果是小写字母转换成大写字母输出，否则原样输出。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int val1, val2;
	char ch;
	scanf("%c", &ch);
	val1 = (ch >= 'A' && ch <= 'Z');
	val2 = (ch >= 'a' && ch <= 'z');
	val1 ? putchar(ch + 32) : (val2 ? putchar(ch - 32) : putchar(ch));
	return 0;
}