/*
��do while ���ʵ�ִӼ�������һ�����������븺�������������Щ������ƽ��ֵ��
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, sum = 0, i = 0;
	double ave;
	do
	{
		scanf("%d", &a);
		if (a >= 0)
		{
			sum += a;
			i++;
		}
	} while (a >= 0);
	ave = (double)sum / i;
	printf("%.2f", ave);
	return 0;
}