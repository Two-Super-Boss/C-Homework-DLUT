/*
��Ŀ���ݣ�

�ҳ�һ�����ڸ��������ҽ���������������������� ��������8���ҵ���������11��

�����ʽ:

"%d"

�����ʽ��

"prime=%d\n"

����������

8

���������

prime=11
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	do
	{
		a++;
		b = 0;
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				b++;
			}
		}
	} while (b != 0);
	printf("prime=%d\n", a);
	return 0;
}