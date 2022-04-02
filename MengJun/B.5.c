/*编写简易的四则运算程序。*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	float a, b, result;
	char ch;
	scanf("%f%c%f", &a, &ch, &b);
	switch (ch)
	{
	case '+':
		result = a + b;
		printf("%.2f", result);
		break;
	case '-':
		result = a - b;
		printf("%.2f", result);
		break;
	case '*':
		result = a * b;
		printf("%.2f", result);
		break;
	case '/':
		result = a / b;
		printf("%.2f", result);
		break;
	default:
		printf("错误！\n");
		break;
	}
	return 0;
}