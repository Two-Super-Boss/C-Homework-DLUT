/*
һ������4��ż������6��ʼ��������������֮�ͣ����������������
��ʾ�����庯��int prime(int n),ʵ���ж�һ�����Ƿ���������������ǡ�����1�����򷵻�0��
*/

#include <stdio.h>
int prime(int n)
{
	int i, v;
	v = 0;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			v++;
	if (v == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a;
	printf("������һ������4��ż����");
	scanf("%d", &a);
	int i;
	for (i = 2; i <= a / 2; i++)
	{
		int j = a - i;
		if (prime(i) == 1 && prime(j) == 1)
		{
			printf("���������ǣ�%d %d", i, j);
		}
	}
	return 0;
}