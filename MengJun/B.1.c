/*
��д���򣬸��������˰��(taxcode)���������������˰�� (ʹ��switch��䣩��ע��tax=income*taxcode

income<1000 tax=income*20%

1000<=income<2000 tax=income*30%

income>=2000 tax=income*40%

incomeʼ��ȡ������
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int income;
	float tax, taxcode;
	printf("�������������룺");
	scanf("%d", &income);
	switch (income / 1000)
	{
	case 1:
		taxcode = 0.3;
		break;
	case 0:
		taxcode = 0.2;
		break;
	default:
		taxcode = 0.4;
		break;
	}
	tax = income * taxcode;
	printf("˰��Ϊ��%.2f\n", tax);
	return 0;
}