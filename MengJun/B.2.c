/*
输入三角形的三条边，如果能够构成一个三角形，计算它的面积并输出，否则，输出“不能构成三角形”。

提示：条件用两个关系表达式的与而不用三个关系表达式的与。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	double s, area;
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && fabs(a - b) < c)
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("面积是%.2f\n", area);
	}
	else
	{
		printf("不能构成三角形\n");
	}
	return 0;
}