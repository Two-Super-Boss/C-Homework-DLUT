/*
*********************************************
	   请选择排序方法：
	   1--选择排序法
	   2--冒泡排序法
	   3--退出
*********************************************

从键盘数组（输入）一组数（尺寸为符号常量N），输入数字（1或2或3）

使用switch语句,当输入1时，用选择排序法排序；当输入2时用冒泡排序法排序；当输入3时，什么也不做。最后打印这组数，结束程序的执行。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20
int main()
{
	int a[N];
	int choice = 0;
	int temp, i, j, k;
	printf("请输入数：\n");
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	int* p = a;
	printf("*********************************************\n");
	printf("       请选择排序方法：\n");
	printf("       1--选择排序法\n");
	printf("       2--冒泡排序法\n");
	printf("       3--退出\n");
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