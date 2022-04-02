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
	int ch = 0;//存放getchar()读入字符的int值

	CaseConversion(ch);

	return 0;
}

int CaseConversion(int ch) {
	while ((ch = getchar()) != '\n') {
		if (65 <= ch && ch <= 65 + 25)//判断该字符是否为大写字母
			putchar(ch + 32);//大写转小写
		else if (97 <= ch && ch <= 97 + 25)//判断该字符是否为小写字母
			putchar(ch - 32);//小写转大写
		else
			putchar(ch);//照常打印
	}//读取字符串至回车，并进行大小写的转换

	return ch;
}