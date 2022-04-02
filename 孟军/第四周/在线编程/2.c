/*
题目内容：

为鼓励居民节约用水，自来水公司采取按月用水量分段计费的办法，居民应交水费y(元）与月用水量x(吨)的函数关系式如下（设x>0）。编写程序，输入用户的用水量x(吨）,计算并输出用户应该支付的水费y（元)的值（保留两位小数）。 

	   | 0			 (x<0)
y=f(x)={ 4x/3		 (0<=x<=15)
	   | 2.5x-10.5	 (x>15)

输入格式:

%lf



输出格式：

%.2f



输入样例：

12



输出样例：

y=16.00
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x < 0)
	{
		y = 0;
	}
	else if (x >= 10 && x <= 15)
	{
		y = 4 * x / 3;
	}
	else
	{
		y = 2.5 * x - 10.5;
	}
	printf("%.2f", y);
	return 0;
}