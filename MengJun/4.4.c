/*
��Ŀ���ݣ�

��д���򣬴Ӽ�����������һ��3λ���������ж��Ƿ�"ˮ�ɻ���"������ˮ�ɻ����������"����λ����ˮ�ɻ�����"���������������λ������ˮ�ɻ���������

��ʾ����ν"ˮ�ɻ���"��ָһ3λ�������λ���������͵��ڸ�������

���磺153��һ��ˮ�ɻ�������Ϊ153=1+125+27��



�����ʽ:

%d



�����ʽ��





����������

153



���������

153��ˮ�ɻ�����
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main()
{
	int number, ch1, ch2, ch3;
	int validate;
	scanf("%d", &number);
	ch1 = number / 100;
	ch2 = number % 100 / 10;
	ch3 = number % 10;
	validate = pow(ch1, 3) + pow(ch2, 3) + pow(ch3, 3);
	if (number == validate)
	{
		printf("%d��ˮ�ɻ�����", number);
	}
	else
	{
		printf("%d����ˮ�ɻ�����", number);
	}
	return 0;
}