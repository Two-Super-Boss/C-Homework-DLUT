/*
����һ����λ����������ת����һ���෴���������������5123�����3215��
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int num, a, b, c, d, newNum;
	scanf("%d", &num);
	a = num / 1000;
	b = num / 100 % 10;
	c = num / 10 % 10;
	d = num % 10;
	newNum = d * 1000 + c * 100 + b * 10 + a;
	printf("%d", newNum);
	return 0;
}