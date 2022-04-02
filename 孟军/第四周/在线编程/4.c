/*
题目内容：

编写程序，从键盘输入任意一个3位正整数，判断是否"水仙花数"。若是水仙花数，则输出"该三位数是水仙花数！"，否则输出“该三位数不是水仙花数！”。

提示：所谓"水仙花数"是指一3位数，其各位数字立方和等于该数本身。

例如：153是一个水仙花数，因为153=1+125+27。



输入格式:

%d



输出格式：





输入样例：

153



输出样例：

153是水仙花数！
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main()
{
	int number, ch1, ch2, ch3;
	int validate;
	scanf("%d", &number);
	ch1 = number / 100;
	ch2 = number % 100 / 10;
	ch3 = number % 10;
	validate = pow(ch1, 3) + pow(ch2, 3) + pow(ch3, 3);
	if (number == validate)
	{
		printf("%d是水仙花数！", number);
	}
	else
	{
		printf("%d不是水仙花数！", number);
	}
	return 0;
}