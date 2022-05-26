#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[101]={0};
    int words,i;

    printf("Please input a string: ");
    gets(str);

    for(i = 0;i <= 100; i++){
        if(str[i] == ' ')
            words++;
    }

    printf("There are %d words in this string.\n", words + 1);

    return 0;
}
