/*
题目内容：利用指针编写程序，统计字符串的长度。(不要使用求字符串长度函数）

输入格式:

gets()

输出格式：

"Length of the string is %d\n"

输入样例：

I like programming.

输出样例：

Length of the string is 19
*/

//如果编译器的标准为C11及更新版本，使用gets时会报错
//自行编译时将gets(example)修改为gets_s(example,80)（80为数组长度）

#include <stdio.h>
#define N 100
int main()
{
	char ch[N];
	gets(ch);
	char* p = ch;
	int count = 0;
	while (*p)
	{
		count++;
		p++;
	}
	printf("Length of the string is %d\n", count);
	return 0;
}