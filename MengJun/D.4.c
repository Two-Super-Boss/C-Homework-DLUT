/*
���������������ĺ� #define MAX(a,b,c) ��#define MIN(a,b,c) ��#define DIF(a,b,c)
����������a,b,c�����ֵ����Сֵ�Ĳ�ֵ����ʾ�����������дӼ���������a,b,c��ֵ��������ǵ����ֵ����Сֵ�Ĳ�ֵ����ʹ�ú������á�
*/

#include <stdio.h>
#define MAX(a,b,c) (a>b)?(a>c?a:c):(b>c?b:c)
#define MIN(a,b,c) (a<b)?(a<c?a:c):(b<c?b:c)
#define DIF(a,b,c) ((a>b)?(a>c?a:c):(b>c?b:c))-((a<b)?(a<c?a:c):(b<c?b:c))

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("���ֵ�ǣ�%d\n��Сֵ�ǣ�%d\n��ֵ�ǣ�%d\n", MAX(a, b, c), MIN(a, b, c), DIF(a, b, c));
	return 0;
}