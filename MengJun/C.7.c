/*
从键盘上输入3个学生，每个学生4门课的成绩（浮点型数），计算每个学生的平均成绩，并按平均成绩从高到低存放学生数据，并打印出来。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
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

//这题照样懵逼