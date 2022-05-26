#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[101] = {0};
    char ch;
    int i;

    printf("plaese input a string: ");
    gets(str);
    printf("Please input a character to delete from the string: ");
    scanf("%c", &ch);

    for(i = 0; i <= 100; i++){
        if(str[i] == ch)
            str[i] = 0;
    }

    for(i = 0; i <= 101; i++)
        putchar(str[i]);
    printf("\n");
    
    return 0;
}
