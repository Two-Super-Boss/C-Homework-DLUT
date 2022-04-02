/*
编写程序，根据下面的税码(taxcode)，由所得收入计算税额 (使用switch语句）。注：tax=income*taxcode

income<1000 tax=income*20%

1000<=income<2000 tax=income*30%

income>=2000 tax=income*40%

income始终取正整数
*/

//如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的定义（删除前面的//）
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int income;
	float tax, taxcode;
	printf("请输入所得收入：");
	scanf("%d", &income);
	switch (income / 1000)
	{
	case 1:
		taxcode = 0.3;
		break;
	case 0:
		taxcode = 0.2;
		break;
	default:
		taxcode = 0.4;
		break;
	}
	tax = income * taxcode;
	printf("税额为：%.2f\n", tax);
	return 0;
}