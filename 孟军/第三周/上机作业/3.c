/*
输入梯形的上、下底及高的数值，求梯形的面积。数据类型定义为实型，float或double。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	double up, down, height, square;
	scanf("%lf%lf%lf", &up, &down, &height);
	square = ((up + down) * height) / 2;
	printf("%.1lf", square);
	return 0;
}