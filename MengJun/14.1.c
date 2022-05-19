/*
��Ŀ���ݣ�ĳ����10��ͬѧ������ѧ���ṹ�����ͣ�����ѧ�š�������3�ſγ̵ĳɼ�����д���򣬶�����׼���õ��ı��ļ�student1.txt��Ϊ�ṹ�����������ֵ������ÿ��ѧ����ƽ���ɼ������Ρ�����������Ļ��ͬʱ���浽student2.txt�ļ��С���Դ������Ϊ���ύ���������к����ɵ�student2.txt�ļ���Ϊ�����ϴ���
*/

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
	for (i = 0; i < 10; i++)
	{
		max = 0;
		for (j = 0; j < 10; j++)
		{
			if (p[j].ave > p[max].ave && p[j].rank == 0)
				max = j;
		}
		p[max].rank = i + 1;
	}
}

int main()
{
	FILE* fp1, * fp2;
	fp1 = fopen("student1.txt", "r");
	fp2 = fopen("student2.txt", "w");
	struct student a[10];
	struct aveAndRank ave[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		fscanf(fp1, "%ld %s %f %f %f", &a[i].number, a[i].name, &a[i].score[0], &a[i].score[1], &a[i].score[2]);
		ave[i].ave = (a[i].score[0] + a[i].score[1] + a[i].score[2]) / 3.0;
		ave[i].rank = 0;
	}
	fclose(fp1);
	getRank(ave);
	printf("Number:  Name:        score:       Average��  rank:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n", a[i].number, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2], ave[i].ave, ave[i].rank);
		fprintf(fp2, "%ld %s %.1f %.1f %.1f %.1f %d\n", a[i].number, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2], ave[i].ave, ave[i].rank);
	}
	fclose(fp2);
	return 0;
}