/*
    ���ȣ�
    �Ҳ�֪����Ҫ�����������ǣ����Դ󲿷���ע�ͣ�����

    ��Σ�
    �����������˵��ֱ�Ӱڴ����ˣ�Ҫ��������ܶԾ��У����ø�ϸ����
    ��еĻ�����һ�ԣ�����Ŀ������ʣ����������Ҳ����ˣ���Ϊ
    ��д��Ҳ�ǲ���զд����

    ���
    �𳭣����
    ��������ʦһ�۾��ܿ����������������������������Լ�д
    ���������ʻ��߿���Ҳ�У���
*/
#include <stdio.h>
#include <string.h>
//#include<stdlib.h>
#define MAX_NAME 20
//#define SWAP(TYPE,OD,ND) {TYPE temp = OD;OD = ND;ND = temp;}

struct student{
    int id;
    char name[MAX_NAME];
    int score;
} stu[5] = {0};

void sort(struct student stu[]);
void input(struct student stu[]);
void output(struct student stu[]);
//void swapforchar(char a[], char b[]);
//int max(struct student stu[]);

int main(int argc, char const *argv[])
{
    input(stu);
    output(stu);
    sort(stu);
    printf("Student with ID %d, name %s has the maximum score of %d",stu[4].id, stu[4].name, stu[4].score);
    sort(stu);
    output(stu);

    return 0;
}
void input(struct student stu[]){
    int i;

    printf("*****************************");
    printf("Input");
    printf("*****************************\n");
    for(i = 0; i < 5; i++){
        printf("Please input the information of student #%d\n", i+1);
        printf("ID: ");
        scanf("%d", &stu[i].id);
        printf("Name: ");
        //scanf("%s", stu[i].name);
        //system("pause");
        getchar();
        gets(stu[i].name);
        printf("Score: ");
        scanf("%d", &stu[i].score);
    }
}

void output(struct student stu[]){
    int i;

    printf("\n*****************************");
    printf("Output");
    printf("*****************************\n");

    for(i = 0; i < 5; i++){
        printf("Student #%d information: \n", i+1);
        printf("ID: %d\n", stu[i].id);
        printf("Name: %s\n", stu[i].name);
        printf("Score: %d\n", stu[i].score);
    }
}

void sort(struct student stu[]){
    int i,j;
    int temp1,temp2;
    char temp3[MAX_NAME];

    for(i=0 ; i<4; i++){
        for(j=0; j<4-i; j++){
            if(stu[j].score > stu[j+1].score){
                temp1 = stu[j].score;
                stu[j].score = stu[j+1].score;
                stu[j+1].score = temp1;
                temp2 = stu[j].id;
                stu[j].id = stu[j+1].id;
                stu[j+1].id = temp2;
                strcpy(temp3,stu[j].name);
                strcpy(stu[j].name,stu[j+1].name);
                strcpy(stu[j+1].name,temp3);
                /*SWAP(int, stu[j].id, stu[j+1].id);
                swapforchar(stu[j].name, stu[j+1].name);
                SWAP(int, stu[j].score, stu[j].score)*/
      }
    }
  }
}
/*
void swapforchar(char a[], char b[]) {
    char temp[MAX_NAME];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int max(struct student stu[]){
    int i;
    int max;

    for(i = 1; i < 5; i++){
        if(stu[i-1].score > stu[i].score)
            max = stu[i-1].score;
        else
            max = stu[i].score;
    }

    return max;
}*/