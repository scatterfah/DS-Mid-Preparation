// Write a c program to insert a new node at last position using function.
#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    char name;
    struct student *next;
};
struct student *start = NULL;

void traverse(){
    struct student *i = start;
    while(i != NULL){
        printf("%d%C\n", i -> id, i -> name);
        i = i -> next;
    }
}

struct student *create_node(){
    int a;
    char b;
    printf("Enter the id: \n");
    scanf("%d",&a);
    printf("Enter the name: \n");
    scanf(" %c",&b);
    struct student *newnode;
    newnode = (struct student*)malloc(sizeof(struct student));
    newnode -> id = a;
    newnode -> name = b;
    newnode -> next = NULL;
    return newnode;
}
void insert_last(){
    struct student *newnode = create_node();
    if(start == NULL){
        start = newnode;
    }
    else{
        struct student *i = start;
        while(i -> next != NULL){
            i = i -> next;
        }
        i -> next = newnode;
    }
}

int main(){
    insert_last();
    insert_last();
    insert_last();
    traverse();
    return 0;
}