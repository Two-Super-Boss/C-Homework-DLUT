/*
某大学生入学时的学费为4800元（start），学费的增长率为每年5%（rate），问第四年的学费（final）是多少？四年的总学费又是多少呢？提示：可以使用pow(x,n)，不使用循环语句。
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int start = 4800;
	double rate = 0.05, final, second, third, sum;
	final = start * pow(1 + rate, 4 - 1);
	second = start * pow(1 + rate, 2 - 1);
	third = start * pow(1 + rate, 3 - 1);
	sum = start + second + third + final;
	printf("第四年学费是%.2lf，总学费是%.2lf", final, sum);
	return 0;
}