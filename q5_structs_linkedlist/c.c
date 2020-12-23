#include <stdio.h>

struct Node{
    char name[20];
    struct Node* prev;
    struct Node* next;
};

int main(){

    struct Node a = {"1"};
    struct Node b = {"2", &a};
    struct Node c = {"3"};
    struct Node d = {"4"};

    a.next = &b;
    b.next = &c;
    c.prev = &b;
    c.next = &d;
    d.prev = &c;
    d.next = NULL;

    struct Node *head = &a;

    while(head != NULL){
        printf("%c \n",*head->name);
    head = &(*head->next);
    }
    
    return 0;
}