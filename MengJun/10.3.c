/*
��Ŀ���ݣ�

��д�������������������һ��������ת��Ϊǧ��λ�ָ����ַ���ʽ�����������е��ò������

�����ʽ:

%d

�����ʽ��

%c �� putchar()

����������

123456

���������

123,456
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20

void addDot(int n)
{
	int data[N] = { 0 }, index = 0, i;
	while (n)
	{
		data[index++] = n % 10;
		n /= 10;
	}
	for (i = index - 1; i >= 0; i--)
	{
		printf("%d", data[i]);
		if (i % 3 == 0 && i)
			putchar(',');
	}
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	addDot(n);
	return 0;
}