/*
��Ŀ���ݣ���д������ͨ����������10���������ҳ���������������С�������������������������ݺͽ����

�����ʽ:

%d

�����ʽ��

max=%d,min=%d

����������

2 3 4 1 7 6 8 9 26 35

���������

max=35,min=1
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int max(int a[])
{
	int maxC = 0;
	int j;
	for (j = 0; j < 10; j++)
		if (a[j] > a[maxC])
			maxC = j;
	return a[maxC];
}

int min(int a[])
{
	int minC = 0;
	int k;
	for (k = 0; k < 10; k++)
		if (a[k] < a[minC])
			minC = k;
	return a[minC];
}

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("max=%d,min=%d", max(a), min(a));
	return 0;
}