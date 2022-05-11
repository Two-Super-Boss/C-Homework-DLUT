/*
现有3名学生，每名学生有4门课的成绩。要求使用函数的方法找到所有课程的最高分，确定该最高分是第几个学生的第几门课的成绩，并在主函数中将其输出。（提示：需定义全局变量）

函数原型：void max(int a[][4], int n);

输入格式:

%d

输出格式：

%d

输入样例：

86 78 98 58
77 65 48 96
74 69 94 91

输出样例：

请依次输入3名同学的所有成绩：

86 78 98 58
77 65 48 96
74 69 94 91

所有课程的最高分为98，是第1个同学的第3门课的成绩
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int a[3][4];
int maxdata = 0, d1 = 0, d2 = 0;
void max(int a[][4], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] > maxdata)
			{
				maxdata = a[i][j];
				d1 = i + 1;
				d2 = j + 1;
			}
}
int main()
{
	int i, j;
	printf("请依次输入3名同学的所有成绩：\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	max(a, 3);
	printf("所有课程的最高分为%d，是第%d个同学的第%d门课的成绩", maxdata, d1, d2);
	return 0;
}