/*
��Ŀ���ݣ�����ָ���д����ͳ���ַ����ĳ��ȡ�(��Ҫʹ�����ַ������Ⱥ�����

�����ʽ:

gets()

�����ʽ��

"Length of the string is %d\n"

����������

I like programming.

���������

Length of the string is 19
*/

//����������ı�׼ΪC11�����°汾��ʹ��getsʱ�ᱨ��
//���б���ʱ��gets(example)�޸�Ϊgets_s(example,80)��80Ϊ���鳤�ȣ�

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