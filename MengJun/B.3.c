/*
ʵ�ִӼ�������һ���ַ���ʹ���������������ʹ��if��䣩������Ǵ�д��ĸת����Сд��ĸ����������Сд��ĸת���ɴ�д��ĸ���������ԭ�������
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int val1, val2;
	char ch;
	scanf("%c", &ch);
	val1 = (ch >= 'A' && ch <= 'Z');
	val2 = (ch >= 'a' && ch <= 'z');
	val1 ? putchar(ch + 32) : (val2 ? putchar(ch - 32) : putchar(ch));
	return 0;
}