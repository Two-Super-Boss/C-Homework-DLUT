/*
��Ŀ���ݣ�����ָ���дһ����������3�����������ɴ�С��˳�����������

�����ʽ:

%d

�����ʽ��

%3d

����������

25 68 17

���������

 68 25 17
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void c2(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void c3(int* x, int* y, int* z)
{
	if (*x < *y) c2(x, y);
	if (*x < *z) c2(x, z);
	if (*y < *z) c2(y, z);
}

int main()
{
	int a, b, c;
	int* p1 = &a, * p2 = &b, * p3 = &c;
	scanf("%d%d%d", p1, p2, p3);
	c3(p1, p2, p3);
	printf("%3d%3d%3d", *p1, *p2, *p3);
	return 0;
}