/*
��Ŀ���ݣ�

����һά�������飬����5�������Ӵ�С������������ֵ��

�����ʽ:

"%d"

�����ʽ��

"�����ֵ=%d"

����������

1 5 6 8 2

���������

�����ֵ=6
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[5];
	int max, max2;
	for (int i = 0; i <= 4; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j <= 4; j++)
	{
		for (int k = 0; k <= 4; k++)
		{
			if (a[max] < a[k])
			{
				max2 = max;
				max = k;
			}
		}
	}
	printf("�����ֵ=%d", a[max2]);
	return 0;
}