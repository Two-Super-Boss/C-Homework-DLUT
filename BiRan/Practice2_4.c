/*
	4. Use switch statement to write a program.
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