/*
��Ŀ���ݣ�����ָ���д������һά�����е�������С��Ԫ��ֵ��ʹ������ int array[10]

�����ʽ:

%d

�����ʽ��

printf("max=%d,min=%d",max,min);

����������

10 7 19 29 4 0 7 35 -16 21

���������

max=35,min=-16
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int array[10], * max, * min, * temp;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &array[i]);
	for (temp = array, max = array, min = array; temp < array + 10; temp++)
	{
		if (*temp > *max)
			max = temp;
		if (*temp < *min)
			min = temp;
	}
	printf("max=%d,min=%d", *max, *min);
	return 0;
}