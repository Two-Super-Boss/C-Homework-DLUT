/*
�Ӽ���������13�������������У��ٰ�����˳����������ڸ������в������ Ҫ��ͬʱ��������������ѭ����������
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 13
int main()
{
	int a[13];
	int i, j, temp;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0, j = N - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	return 0;
}