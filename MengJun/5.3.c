/*
��Ŀ���ݣ�

��while������Բ���ʵĽ���ֵ����ֱ���ۼ���ľ���ֵС�� 0.00001 ��
��ʽ : pi /4 ��1-1/3+1/5-1/7 .......

�����ʽ:

��

�����ʽ��

"pi=%.2f\n"

����������

��

���������

pi=3.14
*/

#include <stdio.h>
#include <math.h>
int main()
{
	double PI, mini = 0;
	double i = 1, j = 0;
	for (i = 1; (1 / i) >= 0.00001; i += 2)
	{
		mini += (1 / i) * pow(-1, j);
		j++;
	}
	PI = 4 * mini;
	printf("pi=%.2f\n", PI);
	return 0;
}