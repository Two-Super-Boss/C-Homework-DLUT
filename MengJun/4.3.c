/*
��Ŀ���ݣ�

��д��������һ���ٷ��Ƴɼ����������Ӧ�ĳɼ��ȼ��� A ������ B ������ C ������ D ������ E ���� (ʹ��switch��䣩

ת��ԭ��Ϊ��100��90 ��Ϊ��A��,80 �� 89 ��Ϊ��B��,70 �� 79 ��Ϊ��C��,60 �� 69 ��Ϊ��D ��,60 ������Ϊ��E����

�����ʽ:

%f

�����ʽ��

printf("grade:B\n");

����������

85

���������

grade:B
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int temp;
	float score;
	scanf("%f", &score);
	temp = score / 10;
	switch (temp)
	{
	case 10:
	case 9:
		printf("grade:A\n");
		break;
	case 8:
		printf("grade:B\n");
		break;
	case 7:
		printf("grade:C\n");
		break;
	case 6:
		printf("grade:D\n");
		break;
	default:
		printf("grade:E\n");
	}
	return 0;
}