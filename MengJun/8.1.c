/*
��Ŀ���ݣ�

�������ַ������ӣ���Ҫ��stract������

�����ʽ:

"%s"

�����ʽ��

"%s"

����������

abc
edf

���������

abcedf
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�е�Ԥ����
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int i=0, j=0;
	char a[5], b[5];
	scanf("%s", a);
	scanf("%s", b);
	while (a[i] != '\0')
		i++;
	while (b[j] != '\0')
		a[i++] = b[j++];
	a[i] = '\0';
	printf("%s", a);
	return 0;
}