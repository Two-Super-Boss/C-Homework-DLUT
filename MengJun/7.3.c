/*
��Ŀ���ݣ�

����һά�����6��Ԫ�أ������ֵ�����һ��������

�����ʽ:

"%d"

�����ʽ��

"%d\n"

����������

3 5 6 8 1 2

���������

3
5
6
2
1
8
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[6];
	int max = 0;
	int temp;
	for (int i = 0; i <= 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j <= 5; j++)
	{
		for (int k = 0; k <= 5; k++)
		{
			if (a[max] < a[k])
			{
				max = k;
			}
		}
	}
	temp = a[max];
	a[max] = a[5];
	a[5] = temp;
	for (int i = 0; i <= 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}