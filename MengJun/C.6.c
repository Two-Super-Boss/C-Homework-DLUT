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
	int temp;
	printf("����������\n");
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
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
		for (int j = 0; j < N; j++)
		{
			int min = j;
			for (int k = j + 1; k < N; k++)
				if (a[k] < a[min])
					min = k;
			temp = a[j];
			a[j] = a[min];
			a[min] = temp;
		}
		break;
	case 2:
		for (int j = N - 1; j >= 0; j--)
		{
			for (int k = 0; k < j; k++)
			{
				if (a[k] > a[k + 1])
				{
					temp = a[k];
					a[k] = a[k + 1];
					a[k + 1] = temp;
				}
			}
		}
		break;
	case 3:
		break;
	default:
		printf("�������");
		break;
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", a[i]);
	return 0;
}

//����Ҳ�е��±�