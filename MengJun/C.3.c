/*
输出5以内的金字塔（左靠拢）（左靠拢的金字塔*怎么输出？）
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}