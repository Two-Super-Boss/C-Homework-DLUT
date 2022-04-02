/*
	4. Write a program to calculate the bottom surface perimeter, surface area and volume of a cylinder. 
	   It is required to input the diameter of the bottom surface and the height of the cylinder, 
	   and output the calculation result, taking 2 digits after the decimal point.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#define Pi 3.1415926//����Բ���ʵ�ȡֵ

int main(int argc, char const* argv[])
{
	double diameter;//����ֱ��
	double height;//��
	double BottomSurfacePerimeter;//�����ܳ�
	double SurfaceArea;//�����
	double volume;//���

	scanf("%lf %lf", &diameter, &height);//����Բ����ĵ���ֱ���͸�
	BottomSurfacePerimeter = 2*Pi * (diameter / 2);//��������ܳ�
	SurfaceArea = BottomSurfacePerimeter * height + 2 * (Pi * pow(diameter / 2, 2));//��������
	volume = (Pi * pow(diameter / 2, 2)) * height;//�������
	printf("%.2lf %.2lf %.2lf\n", BottomSurfacePerimeter, SurfaceArea, volume);//��������ܳ�������������

	return 0;
}