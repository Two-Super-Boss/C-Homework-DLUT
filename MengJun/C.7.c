/*
�Ӽ���������3��ѧ����ÿ��ѧ��4�ſεĳɼ�������������������ÿ��ѧ����ƽ���ɼ�������ƽ���ɼ��Ӹߵ��ʹ��ѧ�����ݣ�����ӡ������
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	float score[3][5], temp[5];
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%f", &score[i][j]);
			sum += score[i][j];
		}
		score[i][4] = sum / 4;
		sum = 0;
	}
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (score[j][4] < score[j + 1][4])
			{
				for (int k = 0; k < 5; k++)
				{
					temp[k] = score[j][k];
					score[j][k] = score[j + 1][k];
					score[j + 1][k] = temp[k];
				}
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%.2f ", score[i][j]);
		printf("\n");
	}
	return 0;
}

//���������±�