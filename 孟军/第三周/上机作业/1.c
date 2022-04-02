/*
输入体重（kg）和身高（m），计算一下体质比（BMI），并输出。
提示：体质指数=体重÷（身高*身高）
提示：定义变量：
double Weight,height,BMI;
(double是双精度实型，即用来存储含有小数点的精度比较高的数）
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	double Weight, height, BMI;
	scanf("%lf%lf", &Weight, &height);
	BMI = Weight / (height * height);
	printf("BMI=%.2lf", BMI);
	return 0;
}