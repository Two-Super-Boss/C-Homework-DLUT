/*
	4. Write a program to calculate the bottom surface perimeter, surface area and volume of a cylinder. 
	   It is required to input the diameter of the bottom surface and the height of the cylinder, 
	   and output the calculation result, taking 2 digits after the decimal point.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#define Pi 3.1415926//定义圆周率的取值

int main(int argc, char const* argv[])
{
	double diameter;//底面直径
	double height;//高
	double BottomSurfacePerimeter;//底面周长
	double SurfaceArea;//表面积
	double volume;//体积

	scanf("%lf %lf", &diameter, &height);//输入圆柱体的底面直径和高
	BottomSurfacePerimeter = 2*Pi * (diameter / 2);//计算底面周长
	SurfaceArea = BottomSurfacePerimeter * height + 2 * (Pi * pow(diameter / 2, 2));//计算表面积
	volume = (Pi * pow(diameter / 2, 2)) * height;//计算体积
	printf("%.2lf %.2lf %.2lf\n", BottomSurfacePerimeter, SurfaceArea, volume);//输出底面周长，表面积，体积

	return 0;
}