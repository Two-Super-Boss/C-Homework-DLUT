/*
��Ŀ���ݣ�

��3��3�о������ΧԪ��֮�͡�

�����ʽ:

"%d"

�����ʽ��

"%d"

����������

1 2 3
4 5 6
7 8 9

���������

40
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[3][3];
	int i, j, sum=0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			sum += a[i][j];
	sum -= a[1][1];
	printf("%d", sum);
	return 0;
}