/*
���5���ڵĽ��������ҿ�£�����ҿ�£�Ľ�����*��ô�������
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		for (j = 5 - i; j > 0; j--)
			printf(" ");
		for (k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}