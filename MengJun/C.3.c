/*
���5���ڵĽ���������£������£�Ľ�����*��ô�������
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 5
int main()
{
	int i, j;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}