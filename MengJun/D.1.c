/*
*********************************************
	   ��ѡ�����򷽷���
	   1--ѡ������
	   2--ð������
	   3--�˳�
*********************************************

�Ӽ������飨���룩һ�������ߴ�Ϊ���ų���N�����������֣�1��2��3��

ʹ��switch���,������1ʱ����ѡ���������򣻵�����2ʱ��ð���������򣻵�����3ʱ��ʲôҲ����������ӡ�����������������ִ�С�
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20
int main()
{
	int a[N];
	int choice = 0;
	int temp, i, j, k;
	printf("����������\n");
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	int* p = a;
	printf("*********************************************\n");
	printf("       ��ѡ�����򷽷���\n");
	printf("       1--ѡ������\n");
	printf("       2--ð������\n");
	printf("       3--�˳�\n");
	printf("*********************************************\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		for (j = 0; j < N; j++)
		{
			int* min = p+j;
			for (k = j + 1; k < N; k++)
				if (*(p+k) < *min)
					min = p+k;
			temp = *(p + j);
			*(p + j) = *min;
			*min = temp;
		}
		break;
	case 2:
		for (j = N - 1; j >= 0; j--)
		{
			for (k = 0; k < j; k++)
			{
				if (*(p+k) > *(p+k+1))
				{
					temp = *(p + k);
					*(p + k) = *(p + k + 1);
					*(p + k + 1) = temp;
				}
			}
		}
		break;
	case 3:
		break;
	}
	for (i = 0; i < N; i++)
		printf("%3d", *(p + i));
	return 0;
}