/*
���������ε������ߣ�����ܹ�����һ�������Σ�������������������������������ܹ��������Ρ���

��ʾ��������������ϵ���ʽ���������������ϵ���ʽ���롣
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
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
		printf("�����%.2f\n", area);
	}
	else
	{
		printf("���ܹ���������\n");
	}
	return 0;
}