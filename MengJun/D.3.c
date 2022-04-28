/*
用递归函数求一个整型数的逆序数。
*/

#include <stdio.h>
void swap(int n)
{
	printf("%d", n % 10);
	if (n / 10 != 0)
		swap(n / 10);
}

int main()
{
	int a;
	scanf("%d", &a);
	swap(a);
	return 0;
}