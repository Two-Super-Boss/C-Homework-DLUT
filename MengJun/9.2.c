/*
��Ŀ���ݣ�

��д������������ַ����������ַ��ĸ��������������������ַ��������ͳ�Ƶĸ�����

�����ʽ:

%s

�����ʽ��

%d

����������

abc123fg

���������

3
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define N 20

int countNum(char ch[])
{
	int i = 0, num = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= '0' && ch[i] <= '9')
			num++;
		i++;
	}
	return num;
}

int main()
{
	char ch[N];
	scanf("%s", ch);
	printf("%d", countNum(ch));
	return 0;
}