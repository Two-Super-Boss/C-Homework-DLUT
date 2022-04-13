/*
从键盘上输入13个数存入数组中，再按输入顺序的逆序存放在该数组中并输出。 要求同时用两个变量控制循环的条件。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 13
int main()
{
	int a[13];
	int i, j, temp;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0, j = N - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0; i < N; i++)
		printf("%3d", a[i]);
	return 0;
}