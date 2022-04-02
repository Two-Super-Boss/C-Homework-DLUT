/*
	4. Use switch statement to write a program.	First enter a float variable representing the temperature, and then enter the character 	If the character is ‘C’, convert degree Fahrenheit into degree Celsius(C=(F-32)*5/9). 	If the character is ‘F’, convert degree Celsius into degree Fahrenheit (F=C*(9/5)+32). 	Otherwise, print a message “do nothing”.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char const* argv[])
{
	float tmp = 36.4;//给定一个温度
	int unit;

	scanf("%f\n", &tmp);//输入温度值
	unit = getchar();//输入要转换的单位
	switch (unit)
	{
	case 'C':
		printf("%f", tmp = (tmp - 32) * 5/9);//转换为摄氏度
		break;
	case 'F':
		printf("%f", tmp = tmp*9 / 5 + 32 );//转换为华氏度
		break;
	default:
		printf("do nothing");//原样输出
		break;
	}

	return 0;
}