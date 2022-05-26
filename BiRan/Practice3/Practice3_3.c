
#include <stdio.h>

int main(int argc, char const* argv[])
{
	int num[7] = { 0 };
	int i;

	for (i = 1; i <= 5; i++) {
		printf("Please input the %dth number: ", i);
		scanf_s("%d", &num[i]);
	}
	for (i = 2; i <= 5; i++) {
		if (num[i] > num[6])
			num[6] = num[i];
	}

	printf("max = %d", num[6]);

	return 0;
}