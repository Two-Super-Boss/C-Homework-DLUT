
#include <stdio.h>
#include <math.h>

int prime(int n);//查询素数的函数

void main(int argc, char const* argv[])
{
    int i;
    int n;
    int j = 1;
    int Prime[101]={0};//存放素数的数组

    /*for (i = 2; i <= 100; i++) {
        if (prime(i) == 1) {
            Prime[j] = i;
            j++;
        }
    }//将素数存入数组*/

    printf("Please input the number between 20 and 100: ");
    scanf_s("%d", &n);//输入一个数
    
    for (i = 2; i <= n/2; i++) {
        for (j = 2; j <= n; j++) {
            if (n == i + j) {
                if(prime(i) == 1 && prime(j) == 1)
                printf("%d = %d + %d\n", n, i, j);
            }
        }
    }//将一个偶数表示为两数之和，然后判断两数是否为素数

	//return 0;
}

int prime(int n) {
    int i;
    int k = 1;
    
    if (n > 3) {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i != 0)
                k = 1;
            else {
                k = 0;
                break;
            }
        }
    }
    else
        k = 1;

    return k;
}
