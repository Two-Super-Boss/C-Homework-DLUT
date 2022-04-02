/*
同时输入一个小写字母和一个大写字母，将输入的两个字母转化为其相对应的大、小写字母并输出。提示：定义两个字符型变量，根据其ASCII码值进行计算，不使用大小写字母转换的库函数。
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	char ch1, ch2; //ch1大写，ch2小写
	scanf("%c%c", &ch1, &ch2);
	printf("%c%c", ch1 + 32, ch2 - 32);
	return 0;
}