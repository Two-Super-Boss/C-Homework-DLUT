/*
��Ŀ���ݣ�����ָ���̣�������������Ԫ�ص�ֵ�Գƽ�����ʹ������int a[10].

�����ʽ:

%d

�����ʽ��

%2d

����������

9 1 7 3 4 5 6 2 8 0

���������

 0 8 2 6 5 4 3 7 1 9
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[10], * arr = a;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 5; i++)
	{
		int temp = *(arr + i);
		*(arr + i) = *(arr + 9 - i);
		*(arr + 9 - i) = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%2d", a[i]);
	return 0;
}