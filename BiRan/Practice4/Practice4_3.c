
#include <stdio.h>

int gcd(int m, int n);
int lcd(int m, int n, int gcd_);

int main(int argc, char const* argv[])
{
    int m, n;
    int gcd_;

    printf("Please input m and n:");
    scanf_s("%d %d", &m, &n);

    gcd_ = gcd(m, n);
    printf("The greatest common divisor is %d.\n", gcd(m, n));
    printf("The least common divisor is %d.\n", lcd(m ,n, gcd_));

    return 0;
}

int gcd(int m, int n) 
{
    if (m % n == 0) {
        return n;
    }
    else {
        return gcd(n, m % n);
    }

}

int lcd(int m, int n, int gcd_)
{
    float lcd;

    lcd = (m * n) / gcd(m, n);//最小公倍数=两数乘积/最大公约数

    return (int)lcd;
}