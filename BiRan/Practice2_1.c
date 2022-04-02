/*
	1. Write a program to get the values of integer a and b from the keyboard, 
	   and then calculate the results of a + b, a ¨C b, 
	   a * b, a / b and a % b respectively.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(int argc, char const* argv[])
{
	int a = 0;
	int b = 0;

	printf("Input a:");
	scanf("%d", &a);
	printf("Input b:");
	scanf("%d", &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %f\n", (float)a / b);
	printf("a %% b = %d\n", a % b);

	return 0;
}