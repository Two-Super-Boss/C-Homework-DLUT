/*
题目内容：

编写程序，输入一个百分制成绩，输出所对应的成绩等级“ A ”、“ B ”、“ C ”、“ D ”、“ E ”。 (使用switch语句）

转换原则为：100～90 分为“A”,80 ～ 89 分为“B”,70 ～ 79 分为“C”,60 ～ 69 分为“D ”,60 分以下为“E”。

输入格式:

%f

输出格式：

printf("grade:B\n");

输入样例：

85

输出样例：

grade:B
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int temp;
	float score;
	scanf("%f", &score);
	temp = score / 10;
	switch (temp)
	{
	case 10:
	case 9:
		printf("grade:A\n");
		break;
	case 8:
		printf("grade:B\n");
		break;
	case 7:
		printf("grade:C\n");
		break;
	case 6:
		printf("grade:D\n");
		break;
	default:
		printf("grade:E\n");
	}
	return 0;
}