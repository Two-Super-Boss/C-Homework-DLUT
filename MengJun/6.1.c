/*
��Ŀ���ݣ�

�ο��μ��и��ı��ṩ�����ݣ������ַ�����ѡ��һ�����������������Լ����
//����ѡ�õ�����

�����ʽ:

"%d%d"

�����ʽ��

"GCD=%d\n"

����������

36 8

���������

GCD=4
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("GCD=%d\n", b);
	return 0;
}