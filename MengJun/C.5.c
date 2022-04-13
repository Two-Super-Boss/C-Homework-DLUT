/*
从键盘上输入13个数存入数组中，再按输入顺序的逆序存放在该数组中并输出。 要求同时用两个变量控制循环的条件。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[13];
	for (int i = 12; i >= 0; i--)
		scanf("%d", &a[i]);
	for (int j = 0; j < 13; j++)
		printf("%d", a[j]);
	return 0;
}

//我他妈没看明白