/*
��while���Ӽ���������һЩ�е��ַ���������#���������ֱ�ͳ�Ʋ������ĸ�����ֺ������ַ��ĸ�����
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int num = 0, character = 0, other = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch >= '0' && ch <= '9')
		{
			num++;
		}
		else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			character++;
		}
		else
		{
			other++;
		}
	}
	printf("��ĸ�� %d ��\n������ %d ��\n�����ַ��� %d ��", character, num, other);
	return 0;
}