/*
��Ŀ���ݣ�

��д����ʹ��getchar()��������һ����ĸ����дСд�����ԣ��������ASCIIֵ��

�����ʽ:

getchar()

�����ʽ��

%d

����������

A

���������

ASCII=65
*/

#include <stdio.h>
int main()
{
	char ch;
	ch = getchar();
	printf("ASCII=%d", ch);
	return 0;
}