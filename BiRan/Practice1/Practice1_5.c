/*
	5.Read a line of characters from keyboard, if it is a lowercase letter, 
	  output its uppercase equivalent, and vice versa.  
	  Otherwise output the original character.
	  Please use getchar()
*/

//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int CaseConversion(int ch);

int main(int argc, char const* argv[])
{
	int ch = 0;//���getchar()�����ַ���intֵ

	CaseConversion(ch);

	return 0;
}

int CaseConversion(int ch) {
	while ((ch = getchar()) != '\n') {
		if (65 <= ch && ch <= 65 + 25)//�жϸ��ַ��Ƿ�Ϊ��д��ĸ
			putchar(ch + 32);//��дתСд
		else if (97 <= ch && ch <= 97 + 25)//�жϸ��ַ��Ƿ�ΪСд��ĸ
			putchar(ch - 32);//Сдת��д
		else
			putchar(ch);//�ճ���ӡ
	}//��ȡ�ַ������س��������д�Сд��ת��

	return ch;
}