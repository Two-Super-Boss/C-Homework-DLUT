
#include <stdio.h>

int sum(int num);

int main(int argc, char const* argv[]) {
    int num;

    printf("Please input n: ");
    scanf("%d", &num);

    printf("result = %d", sum(num));

    return 0;
}

int sum(int num) {
    int i;
    int sum;

    for (i = 0; i <= num; i++) {
        sum += i;
    }

    return sum;
}
