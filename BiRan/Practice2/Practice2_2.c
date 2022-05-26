/*
	2. Input five integers from the keyboard, 
	   and then output the minimum number among them.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char const* argv[])
{
	int num[6] = { 0 };
	int i = 0;

	for (i = 1; i <= 5; i++) {
		printf("Please input number #%d: ", i);
		scanf("%d", &num[i]);
		if (i >= 3 && num[i - 1] <= num[i]) {
			num[i] = num[i - 1];
		}//放入数组并排序
	}
	printf("The minimum number is: %d", num[5]);

	return 0;
}