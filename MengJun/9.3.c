/*
��д��������һ�������д���ƽ��ֵ�ĸ���������Ԫ�ظ������⡣���磺������һ����Ϊ1,3,6,9,4,23,35,67,12,88ʱ������ֵΪ3��

����ͷ���壺int aver(int a[],int n);

�����ʽ:

%d

�����ʽ��

%d

����������

1 3 6 9 4 23 35 67 12 88

���������

3
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 10

int aver(int a[], int n)
{
	int j, count = 0;
	double sum = 0.0, ave;
	for (j = 0; j < n; j++)
		sum += a[j];
	ave = sum / n;
	for (j = 0; j < n; j++)
		if (a[j] > ave)
			count++;
	return count;
}

int main()
{
	int a[N];
	int i, n = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		n++;
	}
	printf("%d",aver(a, n));
	return 0;
}