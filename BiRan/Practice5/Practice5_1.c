#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[101];
    int i;

    printf("Please input 5 numbers: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(i = 4; i >= 0; i--){
        printf("%d ", num[i]);
    }
    
    return 0;
}