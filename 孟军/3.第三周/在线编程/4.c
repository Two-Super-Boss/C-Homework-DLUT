/*
��Ŀ���ݣ�

��д���򣬴Ӽ����������д����(money)���������(year)��������(rate)���������湫ʽ�������ʱ�ı�Ϣ�ϼƣ�sum)���������Ϣ�ϼƽ�Ҫ����2λС������

���㹫ʽ��sum=money*(1+rate)^year

��ʾ��������Ҫ������ѧͷ�����⡣

    money��yearʹ�����ͱ�����sum��rateʹ��˫����ʵ�ͱ�����

�����ʽ:

%d%d%lf



�����ʽ��

%7.2f



����������

1000 3 0.025



���������

sum=1076.89
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int money, year;
    double sum, rate;
    scanf("%d%d%lf", &money, &year, &rate);
    sum = money * pow(1 + rate, year);
    printf("sum=%7.2f\n", sum);
    return 0;
}