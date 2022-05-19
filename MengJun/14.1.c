/*
题目内容：某班有10名同学，建立学生结构体类型，包括学号、姓名、3门课程的成绩，编写程序，读入已准备好的文本文件student1.txt，为结构体数组变量赋值，计算每名学生的平均成绩及名次。结果输出到屏幕的同时保存到student2.txt文件中。将源程序作为答案提交，程序运行后将生成的student2.txt文件作为附件上传。
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
	printf("Number:  Name:        score:       Average：  rank:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%-9ld%-10s%-5.1f%-5.1f%-8.1f%-10.1f%-d\n", a[i].number, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2], ave[i].ave, ave[i].rank);
		fprintf(fp2, "%ld %s %.1f %.1f %.1f %.1f %d\n", a[i].number, a[i].name, a[i].score[0], a[i].score[1], a[i].score[2], ave[i].ave, ave[i].rank);
	}
	fclose(fp2);
	return 0;
}