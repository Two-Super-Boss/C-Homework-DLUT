/*
题目内容：

编写程序，把键盘输入的字符串中的小写字母转换为大写字母。

输入格式:

gets

输出格式：

"%s"

输入样例：

aAB23edf

输出样例：

AAB23EDF
*/

//如果编译器的标准为C11及更新版本，使用gets时会报错
//自行编译时将gets(example)修改为gets_s(example,80)（80为数组长度）
//别忘了改回去啊

#include <stdio.h>
#include <string.h>
int main()
{
	char a[80];
	int i, len;
	gets(a);
	len = strlen(a);
	for (i = 0; i < len; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	printf("%s", a);
	return 0;
}