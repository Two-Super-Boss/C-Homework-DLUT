/*
��Ŀ���ݣ�

ĳ����5��ͬѧ������һ��ѧ���ļ���Ϣ������ѧ�š�������3�ſγ̵ĳɼ�����д���򣬼���ÿ��ѧ����ƽ���ɼ������Ρ���ע������һ���ṹ�����ͣ��ýṹָ����Ϊ����������

�����ʽ:

%ld %s %f %f %f

�����ʽ��

%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n

����������

201701 zhao 29.8 85.4 65.4
201702 qian 96.5 87.5 65.4
201703 sun 85.4 65.4 84.6
201704 li 63.4 95.4 86.3
201705 zhou 65.9 84.6 97.5

���������

Number:  Name:        score:       Average��  rank:
201701   zhao      29.8 85.4 65.4     60.2          5
201702   qian       96.5 87.5 65.4     83.1          1
201703   sun        85.4 65.4 84.6     78.5          4
201704   li            63.4 95.4 86.3     81.7          3
201705   zhou      65.9 84.6 97.5     82.7          2
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct student
{
	long number;
	char name[10];
	float score[3];
};

struct aveAndRank
{
	float ave;
	int rank;
};

void getRank(struct aveAndRank* p)
{
	int i, j, max;
	for (i = 0; i < 5; i++)
	{
		max = 0;
		for (j = 0; j < 5; j++)
		{
			if (p[j].ave > p[max].ave && p[j].rank == 0)
				max = j;
		}
		p[max].rank = i + 1;
	}
}

int main()
{
	struct student a[5];
	struct aveAndRank ave[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%ld %s %f %f %f", &a[i].number, a[i].name, &a[i].score[0], &a[i].score[1], &a[i].score[2]);
		ave[i].ave = (a[i].score[0] + a[i].score[1] + a[i].score[2]) / 3.0;
		ave[i].rank = 0;
	}
	getRank(ave);
	printf("Number:  Name:        score:       Average��  rank:\n");
	for (i = 0; i < 5; i++)
		printf("%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n", a[i].number, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2], ave[i].ave, ave[i].rank);
	return 0;
}