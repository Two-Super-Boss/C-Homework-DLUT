/*
��Ŀ���ݣ�

��д��������һ���ַ������Ǵ�д��ĸ��ת����Сд��ĸ������Сд��ĸ����ת���ɴ�д��ĸ�����



�����ʽ:

getchar()



�����ʽ��

putchar()



����������

a



���������

A
*/

#include <stdio.h>
int main()
{
	int a;
	a = getchar();
	if (a >= 'A' && a <= 'Z')
	{
		putchar(a + 32);
	else
	{
		putchar(a - 32);
	}
	return 0;
}