/*
��Ŀ���ݣ��ο�ǰ�渻�ı������ݣ��˽�쳲��������У�Ȼ���д������쳲���������ǰn��֮�ͣ�����nҪ����ż�����ɼ������룩��

�����ʽ:

%d

�����ʽ��

��sum=%d\n��

����������

20

���������

sum=17710
*/

//���û��ʹ��ѧУҪ���Visual C++ 2010�汾�����������һ�еĶ��壨ɾ��ǰ���//��
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