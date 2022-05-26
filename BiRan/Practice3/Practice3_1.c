
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int factorial(int n);

int main(int argc, char const* argv[])
{
	int n;

	printf("Please input n: ");
	scanf_s("%d", &n);

	if (n <= 12) {
		printf("The result should be: %d\n", factorial(n));
	}
	else
		printf("Overflow!\n");

	return 0;
}

int factorial(int n){
	if (n == 0 || n == 1)
		return 1;
    else{
		int result = factorial(n - 1);

		return n * result;
	}
}//½×³Ëº¯Êý
