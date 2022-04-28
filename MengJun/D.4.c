/*
定义三个带参数的宏 #define MAX(a,b,c) ，#define MIN(a,b,c) 和#define DIF(a,b,c)
计算三个数a,b,c的最大值和最小值的差值。提示：在主函数中从键盘上输入a,b,c的值，输出它们的最大值和最小值的差值，不使用函数调用。
*/

#include <stdio.h>
#define MAX(a,b,c) (a>b)?(a>c?a:c):(b>c?b:c)
#define MIN(a,b,c) (a<b)?(a<c?a:c):(b<c?b:c)
#define DIF(a,b,c) ((a>b)?(a>c?a:c):(b>c?b:c))-((a<b)?(a<c?a:c):(b<c?b:c))

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("最大值是：%d\n最小值是：%d\n差值是：%d\n", MAX(a, b, c), MIN(a, b, c), DIF(a, b, c));
	return 0;
}