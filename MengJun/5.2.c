/*
��Ŀ���ݣ�

��do while ���ʵ�ַ����Ӽ�������һ��������������ڻ�����㣬�ۼ���ͣ�ֱ�����븺��������Ȼ�����ƽ��ֵ�������

�����ʽ:

"%d"

�����ʽ��

"AVE=%.2f\n"

����������

25 35 45 55 -1

���������

AVE=40.00
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int input, sum = 0, i = 0;
	double AVE;
	do
	{
		scanf("%d", &input);
		if (input >= 0)
		{
			sum += input;
			i++;
		}
	} while (input >= 0);
	printf("AVE=%.2f\n", (double)(sum / i));
	return 0;
}