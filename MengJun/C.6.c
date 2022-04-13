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
	int temp;
	printf("请输入数：\n");
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
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
		printf("输入错误");
		break;
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", a[i]);
	return 0;
}

//这题也有点懵逼