/*
	3.Given the values of three variables a = 2, b = 4, c = 7, write a program to 
		(1) Calculate the sum of a, b and c;
		(2) Compute and output the value of variable x, where x = a / (b ¨C c)
*/

//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a = 2;
	int b = 4;
	int c = 7;

	printf("a + b + c = %d\n", a + b + c);
	printf("x = a / (b - c) = %.2f", (float)a / (float)(b - c));

	return 0;
}