/*
    这题我也没太懂老师意思
    是按自己的想法来的
    参考性应该为0
*/

#include <stdio.h>

void decrement(int *a);
void swap(int *p1, int *p2);

int main(int argc, char const *argv[])
{
    int a = 5;
    int *p;
    int *p1, *p2;
    int num1;
    int num2;

    {
        p = &a;
        printf("a = %d before decreament.\n", *p);
        decrement(p);
    }

    {
        scanf("%d %d", num1, num2);

        p1 = &num1;
        p2 = &num2;
        swap(p1, p2);
    }
    

    return 0;
}

void decrement(int *a){
    printf("a = %d after decreament.\n", *a - 1);
}
void swap(int *p1, int *p2){
    int temp;

    temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}
