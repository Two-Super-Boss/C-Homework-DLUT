/*
    �²ۣ�����Ϊ����ô��
     �� �������������ʾ��233
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME 20

/*�绰���ṹ��*/
typedef struct book{
    char name[NAME];
    char address[50];
    int phone; 
    struct book *next;
} Book;

Book *create();
void print(Book *p);
void search(Book *p);

int main(int argc, char const *argv[]) 
{
    Book *p;

    p = create();
    print(p);
    search(p);
    free(p);//�ͷ�һ�¿ռ�
    
    return 0;
}

/*��������*/
Book *create(){
    Book *current, *node, *head=NULL;
    int i;

    printf("*****************************");
    printf("Input");
    printf("*****************************\n");
    head = (Book *)malloc(sizeof(Book));
    current = head;
    for(i = 0; i < 3; i++) {
        node = (Book *)malloc(sizeof(Book));
        printf("Input name: ");
        gets(node->name);
        printf("Input address: ");
        gets(node->address);
        printf("Input phone: ");
        scanf("%d", &(node->phone));
        getchar();
        printf("\n");
        current->next = node;
        current = node;
    }
    current->next = NULL;

    return head;
}
/*�����������*/
void print(Book *p){
    printf("*****************************");
    printf("Output");
    printf("*****************************\n");
    while(p->next != NULL){
        //p = p->next;
        printf("Name:");
        puts(p->name);
        //printf("%s\n", p->name);
        printf("Address: ");
        puts(p->address);
        printf("Phone: %d\n", p->phone);
        p = p->next;
    }
}
/*��������*/
void search(Book *p){
    char str[NAME];

    printf("Please input the name to search: ");
    gets(str);
    while(p->next != NULL){
        p = p->next;
        if(strcmp(str, p->name) == 0){
            printf("Contact %s: ", p->name);
            printf("phone number is %d", p->phone);
        }
    }
}