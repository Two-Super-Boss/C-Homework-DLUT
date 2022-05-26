
#include <stdio.h>

int getMax(int a, int b, int c);

int main(int argc, char const* argv[]){
    int num[5];
    int max;
    int i;

    printf("Please input five integers: ");
    for (i = 0; i < 4; i++) {
        scanf_s("%d", &num[i]);
    }
    max = getMax(num[0], num[1], num[2]);
    max = getMax(max, num[3], num[4]);
    printf("max = %d\n", max);

    return 0;
}

int getMax(int a, int b, int c) {
    int max;

    max = a > b ? a : b;
    max = max > c ? max : c;

    return max;
}