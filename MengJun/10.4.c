/*
��Ŀ���ݣ�

��д����������N�������������Ǵ�������a�У�������һ������x��Ȼ����������

����x������ҵ��������Ӧ���±꣬�������"Not Found"��Ҫ����������������10�����������ҽ����

�����ʽ��

%d

%d

�����ʽ��

%d

����������

1 2 3 4 5 6 7 8 9 10

���룺5

��������11��

���������

5

Not Found
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 10

int target(int a[], int n)
{
	int i = 0, j;
	for (j = 0; j < N; j++)
		if (a[j] == n)
			i = j + 1;
	return i;
}

int main()
{
	int a[N], x, i, result;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);
	result = target(a, x);
	if (result != 0)
		printf("%d", result);
	else
		printf("Not Found");
	return 0;
}