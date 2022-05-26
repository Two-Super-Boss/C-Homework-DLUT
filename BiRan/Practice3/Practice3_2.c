
#include <stdio.h>

int main(int argc, char const* argv[])
{
	int Fibonacci[21]={0,1,1};
	int i;

	for (i = 3; i <= 20; i++) {
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}
	for (i = 1; i <= 20; i++) {
		if(i == 10 || i == 20)
			printf("%6d\n", Fibonacci[i]);
		else
			printf("%6d ", Fibonacci[i]);
	}

	return 0;
}