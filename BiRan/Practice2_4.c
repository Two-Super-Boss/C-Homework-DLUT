/*
	4. Use switch statement to write a program.	First enter a float variable representing the temperature, and then enter the character 	If the character is ��C��, convert degree Fahrenheit into degree Celsius(C=(F-32)*5/9). 	If the character is ��F��, convert degree Celsius into degree Fahrenheit (F=C*(9/5)+32). 	Otherwise, print a message ��do nothing��.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char const* argv[])
{
	float tmp = 36.4;//����һ���¶�
	int unit;

	scanf("%f\n", &tmp);//�����¶�ֵ
	unit = getchar();//����Ҫת���ĵ�λ
	switch (unit)
	{
	case 'C':
		printf("%f", tmp = (tmp - 32) * 5/9);//ת��Ϊ���϶�
		break;
	case 'F':
		printf("%f", tmp = tmp*9 / 5 + 32 );//ת��Ϊ���϶�
		break;
	default:
		printf("do nothing");//ԭ�����
		break;
	}

	return 0;
}