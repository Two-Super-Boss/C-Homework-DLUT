/*
用while语句从键盘上输入一些列的字符，遇到‘#’结束，分别统计并输出字母、数字和其他字符的个数。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int num = 0, character = 0, other = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch >= '0' && ch <= '9')
		{
			num++;
		}
		else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			character++;
		}
		else
		{
			other++;
		}
	}
	printf("字母有 %d 个\n数字有 %d 个\n其他字符有 %d 个", character, num, other);
	return 0;
}