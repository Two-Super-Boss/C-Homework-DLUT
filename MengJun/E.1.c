/*
��д������n���������ҳ����������С��.

����ԭ��void maxmin(int a[],int *max,int *min,int n);

��ʾ���ɶ������ߴ�#define N 20, �Ӽ���������Ҫ��������ݸ���n��

����n��������ӡ������Сֵ����main��������ɡ�
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20

void maxmin(int a[], int* max, int* min, int n)
{
	int i;
	*max = a[0];
	*min = a[0];
	for (i = 0; i < n; i++)
	{
		if (*max < a[i])
			*max = a[i];
		if (*min > a[i])
			*min = a[i];
	}
	return;
}

int main()
{
	int a[N], max, min, n;
	printf("��������Ҫ��������ݸ���n��");
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	maxmin(a, &max, &min, n);
	printf("MAX==%d, MIN==%d", max, min);
	return 0;
}