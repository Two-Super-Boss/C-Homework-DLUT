/*��д���׵������������*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	float a, b, result;
	char ch;
	scanf("%f%c%f", &a, &ch, &b);
	switch (ch)
	{
	case '+':
		result = a + b;
		printf("%.2f", result);
		break;
	case '-':
		result = a - b;
		printf("%.2f", result);
		break;
	case '*':
		result = a * b;
		printf("%.2f", result);
		break;
	case '/':
		result = a / b;
		printf("%.2f", result);
		break;
	default:
		printf("����\n");
		break;
	}
	return 0;
}