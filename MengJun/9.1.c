/*
��Ŀ���ݣ�

��д���������ݸ�����ʽ����e��ֵ��1+1/1!+1/2!+1/3!+����+1/n!��ֵ��ȡǰn���Ҫ����������������n��ֵ�����ú�������������

�����ʽ:

%d

�����ʽ

e=%.4f

����������

10

���������

e=2.7183
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double get_e(int n)
{
	double i, j=1.0, k=1.0;
	double e = 1.0;
	for (i = 1.0; i <= n; i++)
	{
		k *= j++;
		e += (1.0 / k);
	}
	return e;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("e=%.4f", get_e(n));
	return 0;
}