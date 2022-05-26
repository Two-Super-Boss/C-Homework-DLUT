/*
    说实话我没读懂老师的意思，
    就按自己的感觉来写了
    所以给出结论：
    参考性为0%
    建议这个不要看了
*/

#include <stdio.h>

int main(int argc, char const* argv[]) {
    int m, n;
    int i, j;
    int a[101][101] = {0};
    int b[101][101] = {0};
    int c[101][101] = {0};

    printf("Input the number of lines: ");
    scanf("%d", &m);
    printf("Input the number of columns: ");
    scanf("%d", &n);
    printf("Input the first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input the second matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Input the third matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &c[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = a[i][j] + c[i][j];
        }
    }

    printf("\nThe sum of matrixs is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
