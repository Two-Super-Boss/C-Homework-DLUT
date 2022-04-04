/*
题目内容：

编写一个乘法计算的程序。输入两个整数，计算它们的乘积并输出计算结果。

提示：声明三个int类型的变量，乘法用*号。

输入格式:

%d

使用scanf函数，%d格式，输入l两个整数，中间用空格隔开。

格式样例：scanf("%d%d",&a,&b);

输出格式：

%d

使用printf函数，%d格式，输出计算结果

输入样例：

3 4

输出样例：

12
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	c = a * b;
	printf("%d\n", c);
	return 0;
}