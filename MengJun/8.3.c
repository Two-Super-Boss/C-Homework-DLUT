/*
��Ŀ���ݣ�

��5��5�о�������Խ��ߺ͸��Խ���Ԫ��֮�͡�

�����ʽ:

"%d"

�����ʽ��

"sum=%d"

����������

1 2 3 4 3
2 3 4 1 6
3 4 5 6 7
4 2 6 7 8
1 6 7 8 9

���������

sum=37
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a[5][5];
	int i, j, sum = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 5; i++)
		sum += a[i][i];
	for (i = 0, j = 4; i < 5, j >= 0; i++, j--)
		sum += a[i][j];
	printf("sum=%d", sum);
	return 0;
}