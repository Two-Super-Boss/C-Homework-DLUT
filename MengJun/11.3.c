/*
题目内容：利用指针编写程序，求一维数组中的最大和最小的元素值。使用数组 int array[10]

输入格式:

%d

输出格式：

printf("max=%d,min=%d",max,min);

输入样例：

10 7 19 29 4 0 7 35 -16 21

输出样例：

max=35,min=-16
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int array[10], * max, * min, * temp;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &array[i]);
	for (temp = array, max = array, min = array; temp < array + 10; temp++)
	{
		if (*temp > *max)
			max = temp;
		if (*temp < *min)
			min = temp;
	}
	printf("max=%d,min=%d", *max, *min);
	return 0;
}