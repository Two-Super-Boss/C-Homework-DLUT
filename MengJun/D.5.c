/*
���庯��void delete1(char str[],char c) ʵ��ɾ��һ���ַ����е�ָ���ַ���
*/

#include <stdio.h>
#define N 20
void delete1(char str[], char c)
{
	int i, j;
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
			continue;
		else
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}

int main()
{
	char s[N], c;
	printf("����ԭʼ�ַ�����Ҫɾ�����ַ���");
	scanf("%s %c", s, &c);
	delete1(s, c);
	printf("%s", s);
	return 0;
}