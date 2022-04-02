/*
求摄氏温度到华氏温度的转换。要求输入摄氏温度，计算并输出华氏温度。提示：数据类型为double型。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	double C, F;
	scanf("%lf", &C);
	F = 1.8 * C + 32;
	printf("%.0lf", F);
	return 0;
}