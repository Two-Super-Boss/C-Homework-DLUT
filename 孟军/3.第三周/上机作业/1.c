/*
�������أ�kg������ߣ�m��������һ�����ʱȣ�BMI�����������
��ʾ������ָ��=���ء£����*��ߣ�
��ʾ�����������
double Weight,height,BMI;
(double��˫����ʵ�ͣ��������洢����С����ľ��ȱȽϸߵ�����
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
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