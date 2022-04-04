/*
题目内容：

编些程序，计算并输出半径r=4.3的圆的面积，PI的取值为3.1415。要求PI必须使用宏常量表示。

输入格式:

输出格式：

 "Area=%5.2f\n"

输入样例：

输出样例：

Area=58.09
*/

#include <stdio.h>
#define PI 3.1415
int main()
{
	float area;
	area = PI * 4.3 * 4.3;
	printf("%.2f", area);
	return 0;
}