/*
题目内容：参考前面富文本的内容，了解斐波那契数列，然后编写程序求斐波那契数列前n项之和（项数n要求是偶数并由键盘输入）。

输入格式:

%d

输出格式：

“sum=%d\n”

输入样例：

20

输出样例：

sum=17710
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int n;
	int sum = 0;
	int a = 1, b = 1, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum += a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("sum=%d", sum);
	return 0;
}