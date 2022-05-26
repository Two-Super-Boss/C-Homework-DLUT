#include <stdio.h>

void input(int s[], int n);
void sort(int s[], int n);
void print(int s[], int n);

int n = 10;

int main(int argc, char const *argv[])
{
    int s[10];

    printf("Please input 10 numbers:\n");
    input(s, n);
    sort(s, n);
    print(s, n);
    printf("\n");

    return 0;
}

void input(int s[], int n){
    int i;

    for(i=0; i<n; i++){
        scanf("%d", &s[i]);
    }
}

void sort(int s[], int n){
    int i,j;
    int temp;

    for(i=0 ; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(s[j] > s[j+1]){
                int temp = s[j] ;
                s[j] = s[j+1] ;
                s[j+1] = temp;
      }
    }
  }
}

void print(int s[], int n){
    int i;

    for(i=0; i<n; i++)
        printf("%d ", s[i]);
}