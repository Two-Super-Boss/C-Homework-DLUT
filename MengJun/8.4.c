/*
��Ŀ���ݣ�

��д���򣬰Ѽ���������ַ����е�Сд��ĸת��Ϊ��д��ĸ��

�����ʽ:

gets

�����ʽ��

"%s"

����������

aAB23edf

���������

AAB23EDF
*/

//����������ı�׼ΪC11�����°汾��ʹ��getsʱ�ᱨ��
//���б���ʱ��gets(example)�޸�Ϊgets_s(example,80)��80Ϊ���鳤�ȣ�
//�����˸Ļ�ȥ��

#include <stdio.h>
#include <string.h>
int main()
{
	char a[80];
	int i, len;
	gets(a);
	len = strlen(a);
	for (i = 0; i < len; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	printf("%s", a);
	return 0;
}