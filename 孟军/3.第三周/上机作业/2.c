/*
�������¶ȵ������¶ȵ�ת����Ҫ�����������¶ȣ����㲢��������¶ȡ���ʾ����������Ϊdouble�͡�
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
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