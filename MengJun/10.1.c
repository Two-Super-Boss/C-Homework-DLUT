/*
��Ŀ���ݣ���д��x��n�η��ĵݹ麯���������������ò������(xΪdouble�ͣ�nΪ���ͣ���������Ϊdouble�ͣ�

�����ʽ:

%lf%d

�����ʽ��

%f

����������

4 3

���������

64.000000
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

double p(double x, int n)
{
	if (n == 1)
		return x;
	else
		return x * p(x, n-1);
}

int main()
{
	double x;
	int n;
	scanf("%lf%d", &x, &n);
	printf("%f", p(x, n));
	return 0;
}