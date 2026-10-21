//Write a c program to search a element in a link list
#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    int name;
    struct student *next;
};

int main(){
    struct student *s1, *s2, *s3, *start;
    s1 = (struct student*)malloc(sizeof(struct student));
    s2 = (struct student*)malloc(sizeof(struct student));
    s3 = (struct student*)malloc(sizeof(struct student));

    s1 = start;

    s1 -> id = 10;
    s1 -> name = 'A';
    s1 -> next = s2;

    s2 -> id = 20; 
    s2 -> name = 'B';
    s2 -> next = s3;

    s3 -> id = 30; 
    s3 -> name = 'C';
    s3 -> next = NULL;

    
    int found = 0;
    struct student *i = start;

    while(i != NULL){
        if(i -> id == 30){
            found = 1;
            break;
        }
        i = i -> next;
    }
    if(found == 1){
        printf("Found");
    }
    else {
        printf("Not found");
    }
    return 0;
}