/*
�������ε��ϡ��µ׼��ߵ���ֵ�������ε�������������Ͷ���Ϊʵ�ͣ�float��double��
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
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