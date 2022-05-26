#include <stdio.h>
#include <stdlib.h>

void sort(int num[], int n);

int main(int argc, char const *argv[])
{
    int n;
    int i;
    int *num;
    FILE *fp;

    printf("Please input n: ");
    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int));
    printf("Please input %d numbers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    sort(num, n);
    printf("The sorted numbers are: ");
    for(i = 0; i < n; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    fp = fopen("output.txt","w+");
    for(i = 0; i < n; i++ ){
        fprintf(fp,"%d ", num[i]);
    }
    free(num);

    return 0;
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