/*
��Ŀ����

��д���������������ͱ�������������������ֵ�����������ı�����

�����ʽ:

%d,%d

�����ʽ��

%d,%d

����������

3,4

���������

4,3
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b;
	int temp;
	scanf("%d,%d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d,%d", a, b);
	return 0;
}