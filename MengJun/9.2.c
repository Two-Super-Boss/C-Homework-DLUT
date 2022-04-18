/*
题目内容：

编写函数，求给定字符串中数字字符的个数，在主函数中输入字符串及输出统计的个数。

输入格式:

%s

输出格式：

%d

输入样例：

abc123fg

输出样例：

3
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20

int countNum(char ch[])
{
	int i = 0, num = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= '0' && ch[i] <= '9')
			num++;
		i++;
	}
	return num;
}

int main()
{
	char ch[N];
	scanf("%s", ch);
	printf("%d", countNum(ch));
	return 0;
}